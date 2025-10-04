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

class B{
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

class C : public B,public A{
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
	
	C obj;
	obj.putDataA();
	obj.putDataB();
	obj.putDataC();
	obj.getDataA();
	obj.getDataB();
	obj.getDataC();
	
	return 0;
}
