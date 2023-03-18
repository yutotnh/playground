#include <unistd.h>

#include <exception>
#include <iostream>
#include <thread>
#include <vector>

void print(int a)
{
    sleep(1);
    printf("a: %d\n", a);
}

int main()
{
    // func
    std::thread print1(print, 1);
    std::thread print2(print, 2);
    std::thread print3(print, 3);
    std::thread print4(print, 4);

    print1.join();
    print2.join();
    print3.join();
    print4.join();

    // func + vector
    std::vector<std::thread> threads;
    for (int i = 0; i < 10; i++) {
        threads.emplace_back(print, i);
    }
    for (auto& thread : threads) {
        thread.join();
    }

    // lambda
    auto lambda = [](int i) {
        sleep(1);
        printf("lambda: %d\n", i);
    };

    std::vector<std::thread> threads_lambda;
    for (int i = 0; i < 10; i++) {
        threads_lambda.emplace_back(lambda, i);
    }
    for (auto& thread : threads_lambda) {
        thread.join();
    }

    return 0;
}
