#ifndef LIB_H
#define LIB_H

namespace complex
{
struct Complex {
    double real;
    double image;
};

static Complex *sum_impl(const Complex &, const Complex &);
static Complex *sub_impl(const Complex &, const Complex &);
static Complex *div_impl(const Complex &, const Complex &);
static Complex *mul_impl(const Complex &, const Complex &);

Complex sum(const Complex &, const Complex &);
Complex sub(const Complex &, const Complex &);
Complex div(const Complex &, const Complex &);
Complex mul(const Complex &, const Complex &);

void print(Complex &);
}  // namespace complex
#endif