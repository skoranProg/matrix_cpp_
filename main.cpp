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

int main() {
    test01();
    std::cout<<"OK\n";
    return 0;
}
