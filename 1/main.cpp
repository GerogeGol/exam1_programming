#include <iostream>

#include "lib.hpp"

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    std::cout << lib::factorial(n) << std::endl;

    return 0;
}
