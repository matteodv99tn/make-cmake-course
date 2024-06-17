#include "my_math/vectors.hpp"
#include "my_math/constants.hpp"
#include "my_math/eigen_check.hpp"

#include <Eigen/Dense>
#include <cassert>

Eigen::VectorXd sum_vectors(const Eigen::VectorXd x, const Eigen::VectorXd y) {
    assert(are_summable(x,y));
    return x + y;
}

Eigen::VectorXd subtract_vectors(const Eigen::VectorXd x, const Eigen::VectorXd y) {
    assert(are_summable(x,y));
    return x - y;
}

double vectors_dot_prod(const Eigen::VectorXd x, const Eigen::VectorXd y) {
    assert(are_dot_productable(x,y));
    return x.transpose() * y;
}

Eigen::VectorXd default_matrix_multiply(const Eigen::VectorXd x) {
    return x * MY_VECTOR_MULTIPLIER;
}
