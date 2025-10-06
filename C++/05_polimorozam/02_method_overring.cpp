//overriding :- class deffenet and function name same :- runtime error
#include<iostream>
using namespace std;

class Perent{
	public:
		void display(){
			cout<<"\nHello this perent Function..";
		}
};

class Child : public Perent{ 
	public:
		void display(){
			cout<<"\nHello This Child Function...";
		}
};

int main(){
	Child obj;
	obj.display();
//	obj.display();

// solve sope resoultion
	obj.Perent::display();
	
	obj.display();
	
	
	return 0;
}
