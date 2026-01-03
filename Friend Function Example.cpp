#include <iostream>
using namespace std;
class MyClass {
private:
    int member1;  
public:
    MyClass(int value) {
        member1 = value;
    }
    friend void showMember(MyClass obj);
};
void showMember(MyClass obj) {
    cout << "The value of member1 is: " << obj.member1 << endl;
}
int main() {
    MyClass obj(10);
    showMember(obj);
    cout<<"Name:Rida Shehzad"<<endl;
    cout<<"RollNo:030"<<endl;
    return 0;
}

