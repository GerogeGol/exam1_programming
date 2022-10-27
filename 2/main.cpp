#include <iostream>

#include "lib.hpp"

void Test()
{
    complex::Complex num1{1, 1};
    complex::Complex num2{2, 2};

    complex::Complex resSum = complex::sum(num1, num2);
    complex::Complex resSub = complex::sub(num1, num2);
    complex::Complex resDiv = complex::div(num1, num2);
    complex::Complex resMul = complex::mul(num1, num2);

    std::cout << "Сумма = ";
    complex::print(resSum);
    std::cout << "Разница = ";
    complex::print(resSub);
    std::cout << "Частное = ";
    complex::print(resDiv);
    std::cout << "Произведение = ";
    complex::print(resMul);
}

int main(int argc, char const *argv[])
{
    Test();
    double real, image;
    std::cout << "Введите два числа." << std::endl
              << " 1 - ое число вещественная часть комплексного числа" << std::endl
              << " 2 - ое число мнимая часть комлпексного числа" << std::endl;
    std::cin >> real >> image;
    complex::Complex num1{real, image};
    std::cout << "Введите два числа." << std::endl
              << " 1 - ое число вещественная часть комплексного числа" << std::endl
              << " 2 - ое число мнимая часть комлпексного числа" << std::endl;
    std::cin >> real >> image;
    complex::Complex num2{real, image};

    complex::Complex resSum = complex::sum(num1, num2);
    complex::Complex resSub = complex::sub(num1, num2);
    complex::Complex resDiv = complex::div(num1, num2);
    complex::Complex resMul = complex::mul(num1, num2);

    std::cout << "Сумма = ";
    complex::print(resSum);
    std::cout << "Разница = ";
    complex::print(resSub);
    std::cout << "Частное = ";
    complex::print(resDiv);
    std::cout << "Произведение = ";
    complex::print(resMul);

    return 0;
}
