#include<iostream>
using namespace std;

class Student{

//    data member
	private:		
		int rollno;
		char sname[20];
//	 memebr function
	public:
//		getdata
		void putData(){
			cout<<"Enter your roll : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>sname;
		}
		
		void getData(){
			cout<<"\nRoll no : "<<rollno;
			cout<<"\nYour name : "<<sname;
		}
};

int main()
{
	Student s1;
	s1.putData();
	s1.getData();
	
//	s1.getData();
//	
//	Student s2;
//	s2.putData();
//	s2.getData();
	
	return 0;
}

