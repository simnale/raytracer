#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "image.h"
#include "ray.h"
#include "scene.h"
#include "sphere.h"

using namespace std;

int main()
{
    cout << "Usage: raycaster test" << endl;
    
    shared_ptr<Image> img{new Image{"green.png",800,600}};
    
    Scene sc;
    sc.set_image(img);
    sc.render();

    return 0;
}

