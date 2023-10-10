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
    // TODO: continue
}
