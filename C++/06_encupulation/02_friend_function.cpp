//friend function
#include<iostream>
using namespace std;

class Shubham{
	private:
		int money = 500;
	public:
		friend void Abhinav(Shubham s);
};

void Abhinav(Shubham s){
	cout<<"Abhinav your Money : "<<s.money;
}

int main()
{
	Shubham s1;
	Abhinav(s1);
	
	return 0;	
} 
