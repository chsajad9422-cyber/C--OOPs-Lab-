#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw() {
        cout << "Drawing a Shape" << endl;
    }
};
class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};
class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a Square" << endl;
    }
};
class Triangle : public Shape {
public:
    void draw() {
        cout << "Drawing a Triangle" << endl;
    }
};
int main() {
    Shape *s;
    Circle c;
    Square sq;
    Triangle t;
    s = &c;
    s->draw();
    s = &sq;
    s->draw();
    s = &t;
    s->draw();
cout<<"Name:Rida Shehzad"<<endl;
cout<<"RollNo:030"<<endl;
    return 0;
}


