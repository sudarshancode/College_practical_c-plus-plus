//Write a c++ program to illustrate dynamic polymorphisam using different
//shapes as an example
#include <iostream>

class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape" << std::endl;
    }
};
class Circle : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a circle" << std::endl;
    }
};
class Square : public Shape {
public:
    void draw() override {
        std::cout << "Drawing a square" << std::endl;
    }
};
int main() {
    Shape* s1;
    s1=new Circle();
    s1->draw();
    s1=new Square();
    s1->draw();
    return 0;
}
