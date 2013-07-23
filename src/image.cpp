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

void Image::set_pixel_color(unsigned w, unsigned h, RGBQUAD col)
{
    FreeImage_SetPixelColor(bitmap, w, h, &col);
}

void Image::set_color(RGBQUAD col)
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


RGBQUAD Image::rgb_color(unsigned char r, unsigned char g, unsigned char b)
{
    RGBQUAD res;
    res.rgbRed = r;
    res.rgbGreen = g;
    res.rgbBlue = b;
    res.rgbReserved = 255;
    return res;
}

RGBQUAD Image::rgb_red()
{
    return rgb_color(255,0,0);
}

RGBQUAD Image::rgb_green()
{
    return rgb_color(0,255,0);
}

RGBQUAD Image::rgb_blue()
{
    return rgb_color(0,0,255);
}

RGBQUAD Image::rgb_white()
{
    return rgb_color(255,255,255);
}

RGBQUAD Image::rgb_black()
{
    return rgb_color(0,0,0);
}
