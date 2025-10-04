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

class C : public A{
	int c;
	public:
		void putDataC(){
			cout<<"Enter your C : ";
			cin>>c;
		}
		void getDataC(){
			cout<<"\nC : "<<c;
		}
};

int main()
{

	B obj;
	obj.putDataA();
	obj.putDataB();
	obj.getDataA();
	obj.getDataB();
	
	
	C obj1;
	obj1.putDataA();
	obj1.putDataC();
	obj1.getDataA();
	obj1.getDataC();

	return 0;
}
