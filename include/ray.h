#ifndef RAY_H
#define RAY_H

#include <eigen3/Eigen/Dense>

class Ray
{
public:
    Ray(Eigen::Vector3d, Eigen::Vector3d);
    
    Eigen::Vector3d evaluate(double);

    Eigen::Vector3d origin;
    Eigen::Vector3d direction;
};

#endif
