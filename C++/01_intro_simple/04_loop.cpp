#include<iostream>
using namespace std;

int main()
{
	int i,j;
	char a = 'A';
	
//	for(i=1;i<=5;i++){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<"\n";
//	}

//	for(i=5;i>=1;i--){
//		for(j=1;j<=i;j++){
//			cout<<"*";
//		}
//		cout<<"\n";
//	}
	
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			cout<<a;
//			a++;
		}
		a++;
		cout<<"\n";
	}

	return 0;
}
