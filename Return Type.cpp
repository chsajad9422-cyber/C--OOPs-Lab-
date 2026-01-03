#include<iostream>
using namespace std;
class Number{
	int value;
	public:
		Number(int v=0){
		value=v;
	}
	  Number operator + (Number obj) {
        Number temp;
        temp.value = value + obj.value;
        return temp;
    }
        void display() {
        cout << "Result: " << value << endl;
    }
};
int main()
{
	 Number n1(10), n2(20), result;
    result = n1 + n2;
    result.display();
    cout << "Name: Rida Shehzad" << endl;
    cout << "Roll No: 030" << endl;
    return 0;
}
