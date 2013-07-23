#include <eigen3/Eigen/Dense>
#include <iostream>
#include <cmath>
#include "sphere.h"

using namespace Eigen;

Sphere::Sphere(Vector3d pos, double r)
    : radius(r)
{
    position = pos;
    radius2 = r*r;
}

double Sphere::intersect(Ray r)
{
    Vector3d displacement = r.origin - position; // O-C
    double a = r.direction.dot(r.direction);
    double b = 2.0*(r.direction.dot(displacement));
    double c = displacement.dot(displacement)-radius2;
    double radicand = b*b - 4.0*a*c;

#ifndef NDEBUG
    // std::cout<<"Sphere::intersect:\na: "<<a<<"\nb: "
    // 	     <<b<<"\nc: "<<c<<"\nradicand: "
    // 	     <<radicand<<std::endl;
#endif

    if (radicand >= 0)
    {
	double root = sqrt(radicand);
	double denominator = 2.0*a;
	double u[2] = {
	    (-b + root)/denominator,
	    (-b - root)/denominator
	};

#ifndef NDEBUG
	// std::cout<<"u1: "<<u[0]<<"\nu2: "<<u[1]<<std::endl;
	// std::cout<<"P1:\n"<<r.evaluate(u[0])<<"\nP2:\n"
	// 	 <<r.evaluate(u[1])<<std::endl;
#endif
	
    }

    return radicand;
}
