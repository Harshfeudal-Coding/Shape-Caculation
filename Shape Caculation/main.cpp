#include <iostream>
#include "shape.h"
#include "circle.h"
#include "rectangle.h"

int main() {
    shape** shapes = new shape * [3];

    shapes[0] = new rectangle(3.4, 5.3);
    shapes[1] = new circle(5.5);
    shapes[2] = new rectangle(7.4, 4.3);

    for (int i = 0; i < 3; i++) {
        std::cout << "Area of shapes [" << i << "]: " << shapes[i]->getArea() << std::endl;
        std::cout << "Perimeter of shapes [" << i << "]: " << shapes[i]->getPerimeter() << std::endl;
    }

    return 0;
}