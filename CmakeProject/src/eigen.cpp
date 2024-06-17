#include <Eigen/Dense>
#include <iostream>

using namespace std;


int main() {
    Eigen::Vector3d x = 2.33 * Eigen::Vector3d::Ones();
    Eigen::Vector3d y = 2.33 * Eigen::Vector3d::Random();
    cout << "x = " << x.transpose() << endl;
    cout << "y = " << y.transpose() << endl;
}
