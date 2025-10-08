//class in public ,private,protected :- only inritance use 

//private :- same class memebr use 
//protected :- inhritance allow deffernt use

#include<iostream>
using namespace std;

class A{
	protected:
		int a;
	public:
		void display(int x){
			a = x;
		} 
};

class B : public A {
	public:
		void data(){
			cout<<"Class B : "<<a;
		}
};



int main()
{
	
	B obj;
	obj.display(10);
	obj.data();
	
	return 0;
}

