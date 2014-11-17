#ifndef __triangle__
#define __triangle__

#include <GLFW/glfw3.h>

class Triangle
{
public:
    
    Triangle()
        : vertices {
        -0.5f,  0.5f, 1.0f, 0.0f, 0.0f, // Top-left
         0.5f,  0.5f, 0.0f, 1.0f, 0.0f, // Top-right
         0.5f, -0.5f, 0.0f, 0.0f, 1.0f, // Bottom-right
        -0.5f, -0.5f, 1.0f, 1.0f, 1.0f  // Bottom-left
    }, elements {
        0, 1, 2,
        2, 3, 0
    } {}    

    float vertices[20];
    GLuint elements[6];
};

#endif