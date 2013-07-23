#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <FreeImage.h>
#include "color.h"

class Image
{
public:
    Image(std::string, unsigned, unsigned);
    ~Image();

    void set_pixel_color(unsigned, unsigned, Color);
    void set_color(Color);
    void save_image();


    unsigned width;
    unsigned height;
    const std::string name;

private:
    FIBITMAP *bitmap;
};

#endif
