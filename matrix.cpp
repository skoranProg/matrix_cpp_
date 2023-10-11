//
// Created by skoran on 10/10/2023.
//

#include "matrix.h"
#include <stdexcept>

//Matrix::Matrix() {
//
//}

Matrix::Matrix(size_t m, size_t n, double def) {
    if (m == 0 && n != 0 || m != 0 && n == 0)
        throw std::logic_error("Invalid matrix size!");
    row_num_ = m;
    col_num_ = n;
    if (m == 0) {
        data_ = nullptr;
        return;
    }
    data_ = new double[m * n];
    std::fill(data_, data_ + m * n, def);
}

Matrix::~Matrix() {
    if (data_)
        delete[] data_;
}