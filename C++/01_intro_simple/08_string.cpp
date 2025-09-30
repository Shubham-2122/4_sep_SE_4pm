#include<iostream>
#include<string>
using namespace std;

int main()
{
	string name;
	
	cout<<"Enter your string :";
//	cin>>name;
	getline(cin,name); // space include
	
	cout<<"\nYour name : "<<name;
	
	return 0;
}
