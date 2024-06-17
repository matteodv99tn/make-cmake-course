#include "my_math/matrices.hpp"
#include "my_math/constants.hpp"
#include "my_math/eigen_check.hpp"

#include <Eigen/Dense>
#include <cassert>

Eigen::MatrixXd sum_matrices(const Eigen::MatrixXd x, const Eigen::MatrixXd y) {
    assert(are_summable(x,y));
    return x + y;
}

Eigen::MatrixXd subtract_matrices(const Eigen::MatrixXd x,
                                  const Eigen::MatrixXd y) {
    assert(are_summable(x,y));
    return x - y;
}

Eigen::MatrixXd multiply_matrices(const Eigen::MatrixXd x,
                                  const Eigen::MatrixXd y) {
    assert(are_multiplicable(x,y));
    return x * y;
}

Eigen::MatrixXd default_matrix_multiply(const Eigen::MatrixXd x) {
    return x * MY_MATRIX_MULTIPLIER;
}
