#include<iostream>
#include</home/wangxv/Files/hw/jw/eigen-3.4.0/Eigen/Core>
using namespace std;
int main(){
    Eigen::Vector3d p;
    p << 2, 1, 1;
    double angle = M_PI / 4;
    Eigen::Matrix3d R;
    R << cos(angle), -sin(angle), 0,
         sin(angle), cos(angle), 0,
         0, 0, 1;

    Eigen::Vector3d t(1, 2, 0);

    Eigen::Vector3d transformed_p = t + R * p;

    Eigen::Vector2d final_p = transformed_p.head<2>() / transformed_p(2);

    std::cout << "(" << final_p(0) << "," << final_p(1) << ")" << std::endl;

    return 0;
}
