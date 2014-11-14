#ifndef __triangle__
#define __triangle__


class Triangle
{
public:
    Triangle()
        : vertices {
         0.0f,  0.5f, // Vertex 1 (X, Y)
         0.5f, -0.5f, // Vertex 2 (X, Y)
        -0.5f, -0.5f  // Vertex 3 (X, Y)
    } {}
    float vertices[6];
};

#endif