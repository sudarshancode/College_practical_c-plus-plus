//Write a C++ program to illustrate virtual function implementation
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Shape's area" << endl;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r) : radius(r) {}

    void area() {
        cout << "Circle's area: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}

    void area() {
        cout << "Rectangle's area: " << length * width << endl;
    }
};

int main() {
    Shape* s=new Shape();
    Shape* shape1 = new Circle(5);
    Shape* shape2 = new Rectangle(12, 4);
    s->area();
    shape1->area();  // Calls Circle's area() method
    shape2->area();  // Calls Rectangle's area() method

    delete shape1;
    delete shape2;

    return 0;
}
