#include <iostream>
#include "image.h"

Image::Image(std::string n, unsigned w, unsigned h)
    : width(w), height(h), name(n)
{
#ifndef NDEBUG
    std::cout<<"Constructing image. Name: "<<name<<std::endl;
#endif
    bitmap = FreeImage_Allocate(w, h, 32);
}

Image::~Image()
{
    FreeImage_Unload(bitmap);
}

void Image::set_pixel_color(unsigned w, unsigned h, Color col)
{
    FreeImage_SetPixelColor(bitmap, w, h, &(col.quad));
}

void Image::set_color(Color col)
{
    for (unsigned x{0};x<width;++x)
    {
	for (unsigned y{0};y<height;++y)
	{
	    this->set_pixel_color(x, y, col);
	}
    }
}

void Image::save_image()
{
    FreeImage_Save(FIF_PNG, bitmap, name.c_str(), PNG_DEFAULT);
}
