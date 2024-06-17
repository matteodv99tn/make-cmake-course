#include "my_math/eigen_check.hpp"

#include <Eigen/Dense>

bool are_summable(const Eigen::MatrixXd &x1, const Eigen::MatrixXd &x2) {
    return (x1.rows() == x2.rows()) && (x1.cols() == x2.cols());
}

bool are_summable(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2) {
    return x1.rows() == x2.rows();
}

bool are_multiplicable(const Eigen::MatrixXd &x1, const Eigen::MatrixXd &x2) {
    return x1.cols() == x2.rows();
}
bool are_dot_productable(const Eigen::VectorXd &x1, const Eigen::VectorXd &x2){
    return x1.rows() == x2.rows();
}

