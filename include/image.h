#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <FreeImage.h>

class Image
{
public:
    Image(std::string  n, unsigned w, unsigned h);

    void set_pixel_color(int c); // wrong arg
    void save_image();

    unsigned width;
    unsigned height;
    const std::string name;
};

#endif
