#ifndef MYMATH_EIGEN_CHECKS_HPP
#define MYMATH_EIGEN_CHECKS_HPP

#include <Eigen/Dense>

bool are_summable(const Eigen::MatrixXd &x1, const Eigen::MatrixXd &x2);
bool are_summable(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2);
bool are_multiplicable(const Eigen::MatrixXd &x1, const Eigen::MatrixXd &x2);
bool are_dot_productable(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2);

#endif // MYMATH_EIGEN_CHECKS_HPP
