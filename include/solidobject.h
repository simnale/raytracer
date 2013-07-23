#ifndef SOLIDOBJECT_H
#define SOLIDOBJECT_H

#include <eigen3/Eigen/Dense>
#include "ray.h"

class SolidObject
{
public:
    virtual double intersect(Ray) =0;
    virtual ~SolidObject() {};
    
    Eigen::Vector3d position;
};

#endif
