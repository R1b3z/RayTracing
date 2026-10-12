#include <iostream>


int main() {
    
    // Image
    int image_w = 256;
    int image_h = 256;


    // Render
    std::cout << "P3\n" << image_w << ' ' << image_h << "\n255\n";

    for (int j = image_h - 1; j >= 0; --j) {
        for (int i = 0; i < image_w; ++i) {
            float r = float(i) / (image_w - 1);
            float g = float(j) / (image_h - 1);
            float b = 0.25;

            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            std::cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }

    
    
    return 0;
}