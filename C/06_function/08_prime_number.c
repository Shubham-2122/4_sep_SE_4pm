// prime number 2,3,5,7
// 0 and prime not 

#include<stdio.h>
#include<conio.h>

int isPrime(int n){
	int i;
	if(n <= 1) 
		return 0; //prime
	
	for(i=2;i<=n/2;i++){
		if(n % 2 == 0){
			return 0; // not prime
		}
	}
	
	return 1;
}

int main()
{
	int num;
	printf("Enter your number : ");
	scanf("%d",&num);
	
	if(isPrime(num))
	{
		printf("%d is prime number ",num);
	}
	else{
		printf("%d is not Prime number ",num);
	}
	
	return 0;
}
