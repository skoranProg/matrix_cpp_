//
// Created by skoran on 10/10/2023.
//

#ifndef MATRIX_MATRIX_H
#define MATRIX_MATRIX_H

#include <cstddef>
#include <utility>

/**
 * Represents a matrix of doubles.
 * //TODO: convert to a class template
 */
class Matrix {
public:

    class Row {
        friend class Matrix;
    public:
        double& operator[](size_t j){
            return parent_->getEl(number_, j);
        }

        const double& operator[](size_t j) const {
            return parent_->getEl(number_, j);
        }
    protected:
        Row(size_t number, Matrix* parent) : number_{number}, parent_{parent} {}
    protected:
        size_t number_;
        Matrix* parent_;
    };

    class ConstRow {
        friend class Matrix;
    public:
        const double& operator[](size_t j) const {
            return parent_->getEl(number_, j);
        }
    protected:
        ConstRow(size_t number, const Matrix* parent) : number_{number}, parent_{parent} {}
    protected:
        size_t number_;
        const Matrix* parent_;
    };

    class iterator{

    };

    class const_iterator{

    };
public:
    /*Matrix()
        : row_num_(0),
          col_num_{0},
          data_{nullptr}
          {
//        row_num_ = 0;
//        col_num_ = 0;
//        data_ = nullptr;
          }*/
    Matrix() : Matrix(0, 0) {}

    Matrix(size_t m, size_t n, double def = double());

    ~Matrix();

    Row operator[](size_t i) {
        Row r(i, this);
        return r;
    }

    ConstRow operator[](size_t i) const {
        const ConstRow r(i, this);
        return r;
    }

    iterator begin(){
        iterator it;
        return it;
    }

    iterator end(){
        iterator it;
        return it;
    }

    double& getEl(size_t i, size_t j) {
        return data_[offset(i, j)];
    }

    const double& getEl(size_t i, size_t j) const {
        return data_[offset(i, j)];
    }

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

    /// calculates offset of the [i_th, j_th] element
    size_t offset(size_t i, size_t j) const {
        return i * col_num_ + j;
    }

protected:
    size_t row_num_;
    size_t col_num_;
    double* data_;
};

#endif //MATRIX_MATRIX_H
