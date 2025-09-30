#include<iostream>
using namespace std;

int main()
{
	int a[2][2],b[2][2],sum[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"Enter your elements : ";
			cin>>a[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"\na["<<i<<"]["<<j<<"] : "<<a[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"\nEnter your elements 2: ";
			cin>>b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"\nb["<<i<<"]["<<j<<"] : "<<b[i][j];
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
		for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			cout<<"\nsum["<<i<<"]["<<j<<"] : "<<sum[i][j];
		}
	}

	
	return 0;
}
