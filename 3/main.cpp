#include <iostream>

#include "lib.hpp"

void Test()
{
    int **arr1 = new int *[1];
    arr1[0] = new int[3];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[0][2] = 3;

    int **arr2 = new int *[3];
    arr2[0] = new int[1];
    arr2[1] = new int[1];
    arr2[2] = new int[1];
    arr2[0][0] = 4;
    arr2[1][0] = 5;
    arr2[2][0] = 6;

    mtr::Matrix matrix1{arr1, 1, 3};
    mtr::Matrix matrix2{arr2, 3, 1};

    mtr::Matrix matrix3 = mtr::mul(matrix1, matrix2);
    mtr::print(matrix3);
}

int main(int argc, char const *argv[])
{
    Test();
    int n, m;
    std::cout << "Введите размер матрицы. Высота ширина:" << std::endl;
    std::cin >> n >> m;
    mtr::Matrix matrix1 = mtr::createMatrix(n, m);
    std::cout << "Введите матрицу:" << std::endl;
    mtr::fillMatrix(matrix1);

    std::cout << "Введите размер матрицы. Высота ширина:" << std::endl;
    std::cin >> n >> m;
    mtr::Matrix matrix2 = mtr::createMatrix(n, m);
    std::cout << "Введите матрицу:" << std::endl;
    mtr::fillMatrix(matrix2);

    std::cout << "Matrix1" << std::endl;
    mtr::print(matrix1);
    std::cout << std::endl;

    std::cout << "Matrix2" << std::endl;
    mtr::print(matrix2);
    std::cout << std::endl;

    mtr::Matrix matrix3 = mtr::mul(matrix1, matrix2);

    std::cout << "Matrix1 * Matrix2 = Matrix3" << std::endl;
    mtr::print(matrix3);
    return 0;
}
