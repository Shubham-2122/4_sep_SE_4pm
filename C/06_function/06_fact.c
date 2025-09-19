//5 :- 1+2+3+4+5 = 15
//5! :- 5*4*3*2*1
// recurive :- automacticalyy 1

#include<stdio.h>
#include<conio.h>

int factorial(int n){
	int fact=1,i;
	for(i=1;i<=n;i++){
		fact = fact * i;
	}
	return fact;
}


int main()
{
	int num;
	printf("Enter your Number: ");
	scanf("%d",&num);
	
	printf("num : %d",num);
	printf("factorial : %d",factorial(num));
	
	return 0;
}
