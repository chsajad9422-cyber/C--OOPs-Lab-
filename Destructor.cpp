#include <iostream>
using namespace std;
class X {
public:
    X() {
        cout << "Constructor of class X is called." << endl;
    }
    ~X() {
        cout << "Destructor of class X is called." << endl;
    }
};
int main() {
    cout << "Creating object obj of class X." << endl;
    X obj;  
    cout << "End of main function." << endl;
    return 0;
}

