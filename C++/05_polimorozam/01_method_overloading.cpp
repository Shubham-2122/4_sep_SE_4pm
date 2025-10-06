// method overloading :- it's a smae class and function name same  but parameter 
// :- compile time error 
#include<iostream>
using namespace std;

class Overload{
	public:
		void display(){
			cout<<"\nHello display function.";
		}
		void display(int x){
			cout<<"\nhello display function 2.";
		}
		void display(int x,int y){
			cout<<"\nHello display function 3.";
		}
};

int main()
{
	Overload ob;
	
	ob.display();
	ob.display(23);
	ob.display(10,10);
	
	
	return 0;
}

