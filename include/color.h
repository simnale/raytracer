#ifndef COLOR_H
#define COLOR_H

#include <FreeImage.h>

class Color
{
public:
    Color(unsigned char, unsigned char, unsigned char); // rgb

    static Color red();
    static Color green();
    static Color blue();
    static Color white();
    static Color black();

    RGBQUAD quad;
};

#endif
