#include<iostream>
using namespace std; 
class Employee
{
  int id;
  char name[30];
  public:
  void getdata(); 
  void putdata();
};
void Employee::getdata(){
  cout<<"Enter Id : ";
  cin>>id;
  cout<<"Enter Name : ";
  cin>>name;
}
void Employee::putdata(){
  cout<<id<<" "<<endl;
  cout<<name<<" "<<endl;

}
int main(){
  Employee emp; 
  emp.getdata();
  emp.putdata();
  return 0; }

