#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area() {
        int choice;
        float r, l, w;
        cout << "Choose Shape to Calculate Area\n";
        cout << "1. Circle\n";
        cout << "2. Rectangle\n";
        cout << "Enter choice: ";
        cin >> choice;
        if (choice == 1) {
            cout << "Enter radius: ";
            cin >> r;
            cout << "Area of Circle = " << 3.14 * r * r << endl;
        }
        else if (choice == 2) {
            cout << "Enter length and width: ";
            cin >> l >> w;
            cout << "Area of Rectangle = " << l * w << endl;
        }
        else {
            cout << "Invalid Choice!" << endl;
        }
    }
};
class Square : public Shape {
public:
    void area() {
        float side;
        cout << "Enter side of square: ";
        cin >> side;
        cout << "Area of Square = " << side * side << endl;
    }
};
int main() {
    Shape *s;
    Square sq;
    cout << "\n--- Base Class Area Method ---\n";
    s = &sq;
    s->Shape::area();
    cout << "\n--- Derived Class Area Method (Overriding) ---\n";
    s->area();
    return 0;
}

