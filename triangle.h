#ifndef __triangle__
#define __triangle__


class Triangle
{
public:
    
    Triangle()
        : vertices {
        0.0f,  0.5f, 1.0f, 0.0f, 0.0f, // Vertex 1: Red
        0.5f, -0.5f, 0.0f, 1.0f, 0.0f, // Vertex 2: Green
        -0.5f, -0.5f, 0.0f, 0.0f, 1.0f  // Vertex 3: Blue
    } {}
    
    float vertices[15];
};

#endif