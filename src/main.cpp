#include <iostream>
#include <string>
#include <vector>

#include "image.h"

using namespace std;

int main()
{
    cout << "Usage: raycaster test" << endl;
    Image img("test.png", 640, 800);
    img.set_color(Image::rgb_black());
    img.save_image();
    return 0;
}
