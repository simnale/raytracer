#include <eigen3/Eigen/Dense>
#include <iostream>
#include "scene.h"

Scene::Scene()
{
}

void Scene::set_image(std::shared_ptr<Image> i)
{
    img = i;
}

Ray Scene::shoot_ray(int x, int y)
{
    double xpart, ypart;
    xpart = (double)x / (double) img->width;
    ypart = (double)y / (double) img->height;

    xpart -= 0.5;
    ypart -= 0.5;

    xpart *= img->width;
    ypart *= img->height;

    
    Ray res{{0,0,-2},{xpart,ypart,1.0}};
    res.direction = res.direction.normalized();
    return res;
}

void Scene::render()
{
    if (!img) throw No_image_set{};

    img->set_color(Color::white());

    Sphere sp{{0,0,9},12.0};

    for (double i{0.0}; i<img->width; ++i)
    {
	for (double j{0.0}; j<img->height; ++j)
	{
	    Ray r = shoot_ray(i, j);

	    if (sp.intersect(r) >= 0)
	    {
		std::cout << "Intersect at: "
			  <<i<<" "<<j<<std::endl;
		img->set_pixel_color(i,j,Color::black());
	    }
	}
    }

    img->save_image();
}    
