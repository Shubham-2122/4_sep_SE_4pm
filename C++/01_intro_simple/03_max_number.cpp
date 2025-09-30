#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter your a : ";
	cin>>a;
	cout<<"Enter your b : ";
	cin>>b;
	cout<<"Enter your c : ";
	cin>>c;
	
	if(a>b){
		if(a>c){
			cout<<"\na is max : "<<a;
		}
		else{
			cout<<"\nc is max : "<<c;
		}
	}
	else if(b>c){
		cout<<"\nb is max : "<<b;
	}
	else{
		cout<<"\nc is max : "<<c;
	}
	return 0;
}
