#ifndef IMAGE_H
#define IMAGE_H

#include <string>
#include <FreeImage.h>

class Image
{
public:
    Image(std::string, unsigned, unsigned);
    ~Image();

    void set_pixel_color(unsigned, unsigned, RGBQUAD);
    void set_color(RGBQUAD);
    void save_image();

    static RGBQUAD rgb_color(unsigned char, unsigned char, unsigned char);
    static RGBQUAD rgb_red();
    static RGBQUAD rgb_green();
    static RGBQUAD rgb_blue();
    static RGBQUAD rgb_white();
    static RGBQUAD rgb_black();

    unsigned width;
    unsigned height;
    const std::string name;

private:
    FIBITMAP *bitmap;
};

#endif
