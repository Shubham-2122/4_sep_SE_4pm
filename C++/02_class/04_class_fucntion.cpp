#include<iostream>
using namespace std;

class Student{

//    data member
	private:		
		int rollno;
		string sname;
		
//	 memebr function
	public:
//		getdata
		void putData(){
			cout<<"Enter your roll : ";
			cin>>rollno;
			cin.ignore();
			
			cout<<"Enter your Name : ";
			getline(cin,sname);
		}
//		declare
		void getData();
		
};

// function outside class 
void Student::getData(){
			cout<<"\nRoll no : "<<rollno;
			cout<<"\nYour name : "<<sname;
		}

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

