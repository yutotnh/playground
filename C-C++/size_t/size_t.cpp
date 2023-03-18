#include <iostream>

int main(int argc, char *argv[])
{
    std::size_t a = 0;
    std::size_t b = 1;

    auto a_minus_b = a - b;
    std::cout << "a - b: " << a_minus_b << std::endl;
}
