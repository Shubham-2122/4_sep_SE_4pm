//inhritance :- base class to driver class
// prenet to child 
// last class object 
//type 5 
//1) single inhri :- A - B
//2) mutile level : A - B - C 
//3) multiple  :- A - C,b - c 
//4) hyirchical :- A - b , A - c 
//5) hybird :- 2 comibnation  

// : public

#include<iostream>
using namespace std;


class A{
	int a;
	public:
		void putDataA(){
			cout<<"Enter your A : ";
			cin>>a;
		}
		void getDataA(){
			cout<<"\nA : "<<a;
		}
};

// single inritance
class B : public A{
	int b;
	public:
		void putDataB(){
			cout<<"Enter your B : ";
			cin>>b;
		}
		void getDataB(){
			cout<<"\nB : " <<b;
		}
};

int main()
{
	B obj;
	obj.putDataA();
	obj.putDataB();
	obj.getDataA();
	obj.getDataB();
	return 0;
}

