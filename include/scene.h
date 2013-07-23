#ifndef SCENE_H
#define SCENE_H

#include <string>
#include <memory>
#include "sphere.h"
#include "ray.h"
#include "image.h"
#include "color.h"

struct No_image_set{};

class Scene
{
public:
    Scene();
    void set_image(std::shared_ptr<Image>);
    void render();
    Ray shoot_ray(int x, int y);

    std::shared_ptr<Image> img;
};

#endif
