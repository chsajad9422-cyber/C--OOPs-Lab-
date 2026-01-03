#include <iostream>
using namespace std;
class Shape {
public:
    virtual void area(double r) {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
    virtual void area(double l, double w) {
        cout << "Area of Rectangle = " << l * w << endl;
    }
};
class Square : public Shape {
public:
    void area(double s) override {
        cout << "Area of Square = " << s * s << endl;
    }
};
int main() {
    Shape obj;
    Square sq;
    obj.area(5);      
    obj.area(4, 6);     
    sq.area(4);         
cout<<"Name:Rida Shehzad"<<endl;
cout<<"Roll NO:030 "<<endl;
    return 0;
}

