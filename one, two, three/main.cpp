#include "color.h"
#include "vec3.h"

#include <iostream>
using namespace std;

int main() {
    //Image
    int width = 256;
    int height = 256;

    //Render
    cout << "P3\n" << width << " " << height << "\n225\n";

    for (int y = 0; y < height; y++) {
        clog << "\rScanlines remaining: " << (height - y) << " " << flush;
        for (int x = 0; x < width; x++) {
           auto pixel_color = color(double(x) / (width - 1), double(y) / (height - 1), 0);
           write_color(cout, pixel_color);
        }
    }
    clog << "\rDone.                \n";
}