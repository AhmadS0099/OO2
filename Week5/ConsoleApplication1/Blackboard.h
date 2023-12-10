#pragma once

#include <future>

class BlackboardStrategy;

class Blackboard {
public:
    Blackboard();
    virtual ~Blackboard();

    void subThread1(std::promise<unsigned>& result);
    void subThread2(std::promise<unsigned>& result);

    void run();

private:
    unsigned bestResult;
    unsigned bestStrategy;
};