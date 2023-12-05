#include <iostream>
#include <thread>

class ThreadClass {
public:
    ThreadClass(int n) : n(n), t(&ThreadClass::showValue, this) {}

    ~ThreadClass() {
        if (t.joinable()) {
            t.join();
        }
    }

private:
    int n;
    std::thread t;

    void showValue() {
        std::cout << n << std::endl;
    }
};

int main() {
    ThreadClass* threadObjects[100];

    for (int i = 0; i < 100; ++i) {
        threadObjects[i] = new ThreadClass(i);
    }

    for (int i = 0; i < 100; ++i) {
        delete threadObjects[i];
    }

    std::cout << "Ready" << std::endl;

    return 0;
}
