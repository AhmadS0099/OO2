// PracWeek4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <chrono>
#include <future>


double eenLangeBerekening()
{
    unsigned n;
    double total = 0.0;
    for (n = 0; n < UINT_MAX; n++) // UINT_MAX staat in <climits>...
    {
        total += n;
    }
    return total;
}

void inEenLangeBerekening(std::promise<double>& result) {
    
}


int main()
{
    std::future<double>* paResult[2];

    for (int i = 0; i < 2; i++) {


        paResult[i] = new std::future<double> (std::async(eenLangeBerekening));

        eenLangeBerekening();
        auto start = std::chrono::steady_clock::now();
        double result = eenLangeBerekening();
        auto end = std::chrono::steady_clock::now();
        auto diff = std::chrono::duration_cast<std::chrono::milliseconds>(end -
            start);
        std::cout << result << " " << diff.count() / 1000.0 << " secondes" << std::endl;
    }
    
}
