#include <iostream>
#include "image.h"

Image::Image(std::string n, unsigned w, unsigned h)
    : width(w), height(h), name(n)
{
#ifndef NDEBUG
    std::cout<<"Constructing image. Name: "<<name<<std::endl;
#endif
}

void Image::set_pixel_color(int c)
{
    // implement
}

void Image::save_image()
{
    // implement
}
