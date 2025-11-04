#include<iostream>
using namespace std;

class Base{
	public :
		void display(){
			cout<<"\n This Is Base Class";
		}
};
class Derived : public Base{
	public :
		void display(){
			cout<<"\n This is Derived Class ";
		}
};

int main(){
	
	Derived obj;
	
	obj.display();
	
    obj.Base::display();
	

	
	return 0;
}
