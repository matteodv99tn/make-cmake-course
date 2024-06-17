#ifndef MYMATH_VECTORS_HPP
#define MYMATH_VECTORS_HPP

#include <Eigen/Dense>

Eigen::VectorXd sum_vectors(const Eigen::VectorXd x, const Eigen::VectorXd y);
Eigen::VectorXd subtract_vectors(const Eigen::VectorXd x,
                                 const Eigen::VectorXd y);
double vectors_dot_prod(const Eigen::VectorXd x,
                                 const Eigen::VectorXd y);

Eigen::VectorXd default_vector_multiply(const Eigen::VectorXd x);

#endif // MYMATH_VECTORS_HPP
