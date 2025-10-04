//Constructor :- group member and memeber function 
// Class have only one :- Automacully call :- object

// 1) defult  :- top
//2) parameter
//3) copy const 
//4) deconstror :- last

#include<iostream>
#include<cstring>
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
		
//		paramter constro
		Student(int r,const char s[50]){
			rollno = r;
			strcpy(sname,s);
		}
		
//		copy con
		Student(Student &s){
			rollno = s.rollno;
			strcpy(sname,s.sname);
		}
		
		void Display(){
			cout<<"\nyour rollno :"<<rollno;
			cout<<"\nYour Name : "<<sname;
		}
		
		
};

int main()
{
//	defualt
	Student s1;
	s1.Display();
	
//	paramter
	Student s2(102,"het");
	s2.Display();
	
//	copy
	Student s3(s1);
	s3.Display();
	
	return 0;
}



