#ifndef MYMATH_MATRICES_HPP
#define MYMATH_MATRICES_HPP

#include <Eigen/Dense>

Eigen::MatrixXd sum_matrices(const Eigen::MatrixXd x, const Eigen::MatrixXd y);
Eigen::MatrixXd subtract_matrices(const Eigen::MatrixXd x,
                                  const Eigen::MatrixXd y);
Eigen::MatrixXd multiply_matrices(const Eigen::MatrixXd x,
                                  const Eigen::MatrixXd y);

Eigen::MatrixXd default_matrix_multiply(const Eigen::MatrixXd x);

#endif // MYMATH_MATRICES_HPP
