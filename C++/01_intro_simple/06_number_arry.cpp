#include<iostream>
using namespace std;

int main()
{
	int a[5];
	int i,j,temp;
	
	for(i=0;i<5;i++){
		cout<<"enter your element : ";
		cin>>a[i];
	}
	
	for(i=0;i<5;i++){
		cout<<"\na["<<i<<"] : "<<a[i];
	}
	
//	cout<<"\nrevser order :";
//	for(i=4;i>=0;i--){
//		cout<<"\na["<<i<<"] : "<<a[i];
//	}
	
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[i] < a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	cout<<"\nAsceding order :";
	for(i=0;i<5;i++){
		cout<<"\na["<<i<<"] : "<<a[i];
	}
	
	return 0;
}
