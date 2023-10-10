//
// Created by skoran on 10/10/2023.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstddef>

/**
 * Represents a matrix of doubles.
 * //TODO: convert to a class template
 */
class Matrix {
public:
    Matrix()
        : row_num_(0),
        col_num_{0},
        data_{nullptr}
    {
//        row_num_ = 0;
//        col_num_ = 0;
//        data_ = nullptr;
    }

    Matrix(size_t m, size_t n, double def = double());


    /// returns number of rows of matrix
    size_t getRowNum() const {
        return row_num_;
    }

    size_t getColNum() const {
        return col_num_;
    }

    const double* getData() const {
        return data_;
    }

protected:
    size_t row_num_;
    size_t col_num_;
    double* data_;
};

#endif //MATRIX_MATRIX_H
