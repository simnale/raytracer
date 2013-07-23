#ifndef SPHERE_H
#define SPHERE_H

#include "solidobject.h"

class Sphere : public SolidObject
{
public:
    Sphere(Eigen::Vector3d, double);
    double intersect(Ray) override;

    double radius;
    double radius2;
};

#endif 
