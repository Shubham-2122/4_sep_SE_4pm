//friend function
#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend class Pranshant;
		
};

class Pranshant : public Shubham{
	public:
		void display(Shubham s){
			cout<<"Prashnat money : "<<s.money;
		}
};


int main()
{
	Shubham data;
	Pranshant s1;
	s1.display(data);
	
	return 0;	
} 
