#include "lib.hpp"

#include <iostream>

namespace mtr
{
Matrix* createMatrix_impl(const int height, const int width)
{
    int** arr = getEmptyArr(height, width);
    return new Matrix{arr, height, width};
}

Matrix* mul_impl(const Matrix& matrix1, const Matrix& matrix2)
{
    int** new_arr = getEmptyArr(matrix1.height, matrix2.width);
    for (int i = 0; i < matrix1.height; i++) {
        for (int j = 0; j < matrix2.width; j++) {
            int sum = 0;
            for (int k = 0; k < matrix1.width; k++) {
                sum += matrix1.arr[i][k] * matrix2.arr[k][j];
            }
            new_arr[i][j] = sum;
        }
    }
    return new Matrix{new_arr, matrix1.height, matrix2.width};
}

int** getEmptyArr(const int height, const int width)
{
    int** arr = new int*[height];
    for (int i = 0; i < height; i++) {
        arr[i] = new int[width];
    }
    return arr;
}

void fillMatrix(Matrix& matrix)
{
    for (int i = 0; i < matrix.height; i++) {
        for (int j = 0; j < matrix.width; j++) {
            std::cin >> matrix.arr[i][j];
        }
    }
}

Matrix createMatrix(const int height, const int width)
{
    return *createMatrix_impl(height, width);
}

Matrix mul(const Matrix& matrix1, const Matrix& matrix2)
{
    if (matrix1.width != matrix2.height) {
        std::cout << "Ширина первой матрицы, должна быть равна высоте второй!";
        exit(-1);
    }
    return *mul_impl(matrix1, matrix2);
}

void print(Matrix& matrix)
{
    for (int i = 0; i < matrix.height; i++) {
        for (int j = 0; j < matrix.width; j++) {
            std::cout << matrix.arr[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}
}  // namespace mtr