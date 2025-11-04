#include<iostream>
using namespace std;

class Base{
	public:
//		inhritance child class use not
		virtual void show() = 0;
};
class Child : public Base{
	public:
		void show(){
			cout<<"\nHello this Show Function";
		}
		void Display(){
			cout<<"\nHello this Display function";
		}
};

int main()
{
	Child b;
	b.show();
	b.show();
	b.Display();
	return 0;
}
