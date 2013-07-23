#include "color.h"

Color::Color(unsigned char r, unsigned char g,
	     unsigned char b)
{
    quad.rgbRed = r;
    quad.rgbGreen = g;
    quad.rgbBlue = b;
    quad.rgbReserved = 255;
}

Color Color::red()
{
    return Color(255,0,0);
}

Color Color::green()
{
    return Color(0,255,0);
}
Color Color::blue()
{
    return Color(0,0,255);
}

Color Color::white()
{
    return Color(255,255,255);
}

Color Color::black()
{
    return Color(0,0,0);
}

