#include <iostream>
#include<conio.h>
using namespace std;
class A{
	private:
		int a;
		public:
			void in(){
				cout<<"Enter value of a";
				cin>>a;
			}
			void out()
			{
				cout<<"the value of a"<<a << endl;
			}
};
class B:public A
{
	private:
		int b;
		public:
			void in(){
				A::in();
				cout<<"Enter value of b";
				cin>>b;
			}
			void out()
			{
				A::out();
				cout<<"the value of b"<<b<<endl;
			}
};
   class c:public B
{
   private:
		int c;
		public:
			void in(){
				B::in();
				cout<<"Enter value of c";
				cin>>c;
			}
			void out()
			{
				B::out();
				cout<<"the value of c"<<c << endl;
			}	
};
int main()
{
	c obj;
	obj.in();
	obj.out();
}
