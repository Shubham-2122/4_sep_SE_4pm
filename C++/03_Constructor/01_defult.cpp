//Constructor :- group member and memeber function 
// Class have only one :- Automacully call :- object

// 1) defult  :- top
//2) parameter
//3) copy const 
//4) deconstror :- last

#include<iostream>
using namespace std;

class Student{
	private:
		int rollno;
		char sname[50];
	public:
//		defualt
		Student(){
			cout<<"\nEnter your Roll : ";
			cin>>rollno;
			cout<<"\nEnter your Name : ";
			cin>>sname;
		}
		
		void Display(){
			cout<<"\nyour rollno :"<<rollno;
			cout<<"\nYour Name : "<<sname;
		}
};

int main()
{
	Student s1;
	s1.Display();
	
//	Student s2;
//	s2.Display();
	
	return 0;
}



