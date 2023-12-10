#include "Blackboard.h"
#include "BlackboardStrategy.h"
#include <iostream>
#include <future>

Blackboard::Blackboard() : bestResult(0), bestStrategy(0) {}

Blackboard::~Blackboard() {}

void Blackboard::subThread1(std::promise<unsigned>& result)
{
    BlackboardStrategy strategyInstance;
    unsigned bestResult = std::max({ strategyInstance.fitnessStrategy1(), strategyInstance.fitnessStrategy2(), strategyInstance.fitnessStrategy3() });
    result.set_value(bestResult);
}

void Blackboard::subThread2(std::promise<unsigned>& result)
{
    BlackboardStrategy strategyInstance;
    unsigned bestResult = std::max({ strategyInstance.fitnessStrategy4(), strategyInstance.fitnessStrategy5(), strategyInstance.fitnessStrategy6() });
    result.set_value(bestResult);
}

void Blackboard::run()
{
    std::promise<unsigned> result1;
    std::promise<unsigned> result2;

    // Start the subthreads using std::async
    auto future1 = std::async(&Blackboard::subThread1, this, std::ref(result1));
    auto future2 = std::async(&Blackboard::subThread2, this, std::ref(result2));

    // Wait for the futures to be ready
    future1.wait();
    future2.wait();

    // Retrieve the results
    unsigned result1Value = result1.get_future().get();
    unsigned result2Value = result2.get_future().get();

    BlackboardStrategy strategyInstance;

    if (result1Value > result2Value) {
        strategyInstance.setBestStrategy(1);
        strategyInstance.setBestResult(result1Value);
    }
    else {
        strategyInstance.setBestStrategy(2);
        strategyInstance.setBestResult(result2Value);
    }

    std::cout << "Best Strategy: " << strategyInstance.getBestStrategy() << std::endl;
    std::cout << "Best Result: " << strategyInstance.getBestResult() << std::endl;
}