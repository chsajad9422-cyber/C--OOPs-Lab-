#include<iostream>
using namespace std;
class Quiz{
	int quizNo;
	int quizMarks;
	public:
		Quiz(int q,int m){
			quizNo=q;
			quizMarks=m;
		}
		void Display(){
			cout<<"Quiz No"<<quizNo<<endl;
			cout<<"Quiz Marks"<<quizMarks<<endl;
		}
};
int main(){
	Quiz obj[]={
	Quiz(1,10),
	Quiz(2,20),
	Quiz(3,30)
	};
	for(int i=0 ; i<3 ; i++){
		obj[i].Display();
	}
	return 0 ;
}
