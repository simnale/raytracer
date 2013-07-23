#include "ray.h"

using namespace Eigen;

Ray::Ray(Vector3d o, Vector3d d)
    : origin(o), direction(d)
{
}

Vector3d Ray::evaluate(double t)
{
    return origin+(direction*t);
}
