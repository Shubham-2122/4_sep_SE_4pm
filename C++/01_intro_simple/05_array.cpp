#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int i;
	
	for(i=0;i<5;i++){
		cout<<"enter your element : ";
		cin>>a[i];
	}
	
	
	for(i=0;i<5;i++){
		cout<<"\na["<<i<<"] : "<<a[i];
	}
	
	
	return 0;
}
