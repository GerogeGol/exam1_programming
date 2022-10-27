#ifndef LIB_H
#define LIB_H

namespace mtr
{
struct Matrix {
    int** arr;
    int height;
    int width;
};

static Matrix* createMatrix_impl(const int, const int);
static int** getEmptyArr(const int, const int);
static Matrix* mul_impl(const Matrix&, const Matrix&);

void fillMatrix(Matrix&);
Matrix createMatrix(const int, const int);
Matrix mul(const Matrix&, const Matrix&);

void print(Matrix&);
}  // namespace mtr

#endif