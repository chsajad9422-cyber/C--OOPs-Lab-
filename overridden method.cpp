#include <iostream>
using namespace std;
class Parent {
public:
    virtual void display_message() {
        cout << "Parent class function" << endl;
    }
};
class Child : public Parent {
public:
    void display_message() {
        cout << "Child class function" << endl;
    }
};
int main() {
    Child obj;
    Parent *ptr = &obj;
    ptr->display_message();
    ptr->Parent::display_message();
    cout<<"Nmae:Rida Shehzad"<<endl;
    cout<<"RollNo:030"<<endl;
    return 0;
}


