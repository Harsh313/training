#include <iostream>

using namespace std;

class Shape {
protected:
    double width, height;

public:
    Shape(double w, double h) : width(w), height(h) {}
     
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area()  {
        return 0.5 * width * height;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area()  {
        return width * height;
    }
};

int main() {
    Triangle triangle(10, 5);
    Rectangle rectangle(10, 5);

    cout << "Triangle area: " << triangle.area() << endl;
    cout << "Rectangle area: " << rectangle.area() << endl;

    return 0;
}

