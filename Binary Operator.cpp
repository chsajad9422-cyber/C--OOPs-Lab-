#include <iostream>
using namespace std;
class Complex {
   private:
    float real;
    float imag;
   public:
    Complex() : real(0), imag(0) {}
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;  
		}       
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;    
		}
void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";      
			} 
			};
int main() 
{
    Complex complex1, complex2, result;
    cout << "Enter first complex number:"<<endl;
    complex1.input();
    cout << "Enter second complex number:"<<endl;
    complex2.input();
    result = complex1 + complex2;
    result.output();
    cout<<"Name:Rida Shehzad"<<endl;
	cout<<"Roll No:030"<<endl;
	    return 0;
	}


