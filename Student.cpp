#include<iostream>
using namespace std;
class Student{
	public:
		string name;
		int rollno;
		float totalmarks;
		float prec;
		void Getdetails(){
    	cout<<"Enter name:";
    	cin>>name;
    	cout<<"Enter Roll NO:";
    	cin>>rollno;
    	cout<<"Enter TotalMarks:";
    	cin>>totalmarks;
        prec=(totalmarks/600)*100;
		}
		void Printdetails()
		{
			cout<<"\nStudent Details"<<endl;
			cout<<"Name:"<<name<<endl;
			cout<<"RollNo:"<<rollno<<endl;
			cout<<"Total Marks:"<<totalmarks<<endl;
			cout<<"Precentage:"<<prec<<endl;
		}
};
int main(){
	Student s1;
	s1.Getdetails();
	s1.Printdetails();
	cout<<"Rida Shehzad"<<endl;
	cout<<"030"<<endl;
}
