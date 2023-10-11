#include <iostream>
#include <cassert>
#include "matrix.h"

void test01() {
    Matrix mat;
    size_t m = mat.getRowNum();
    size_t n = mat.getColNum();
    const double* ptr = mat.getData();
    assert(m == 0);
    assert(n == 0);
    assert(!ptr);
}

void test02() {
    Matrix mat(4, 5);
    assert(mat.getRowNum() == 4);
    Matrix mat2(6, 7, 9.7);
    /*const double* ptr = mat2.getData();
    for (size_t i = 0; i < mat2.getRowNum() * mat2.getColNum(); ++i, ++ptr)
        assert(*ptr == 9.7);*/
    for (size_t i = 0; i < mat2.getRowNum(); ++i)
        for (size_t j = 0; j < mat2.getColNum(); ++j) {
            assert(mat2.getEl(i, j) == 9.7);
            assert(mat2[i][j]==9.7);
            Matrix::Row r=mat2[i];
            assert(r[j]==9.7);
        }
}

int main() {
    test01();
    test02();
    std::cout << "OK\n";
    return 0;
}
