#include "lib.hpp"

#include <iostream>

#include "math.h"

namespace complex
{
Complex *sum_impl(const Complex &a, const Complex &b)
{
    return new Complex{a.real + b.real, a.image + b.image};
}

Complex *sub_impl(const Complex &a, const Complex &b)
{
    return new Complex{a.real - b.real, a.image - b.image};
}

Complex *div_impl(const Complex &a, const Complex &b)
{
    double real = (a.real * b.real + a.image * b.image) / (pow(b.real, 2) + pow(b.image, 2));
    double image = (a.image * b.real - a.real * b.image) / (pow(b.real, 2) + pow(b.image, 2));
    return new Complex{real, image};
}

Complex *mul_impl(const Complex &a, const Complex &b)
{
    double real = (a.real * b.real - a.image * b.image);
    double image = (a.real * b.image + a.image * b.real);
    return new Complex{real, image};
}

Complex sum(const Complex &a, const Complex &b) { return *sum_impl(a, b); }

Complex sub(const Complex &a, const Complex &b) { return *sub_impl(a, b); }

Complex div(const Complex &a, const Complex &b)
{
    if (b.real == 0 && b.image == 0) {
        std::cout << "Второе число не должно быть равно 0 + 0j" << std::endl;
        exit(-1);
    }
    return *div_impl(a, b);
}

Complex mul(const Complex &a, const Complex &b) { return *mul_impl(a, b); }

void print(Complex &a)
{
    char op = (a.image >= 0) ? '+' : '-';
    std::cout << a.real << ' ' << op << ' ' << abs(a.image) << 'j' << std::endl;
}
}  // namespace complex
