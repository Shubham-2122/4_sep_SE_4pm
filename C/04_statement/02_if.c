/*
	syntax :- 
	if(codition){
		true value
		...code
	}

*/



#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("age : %d",age);	
	
//	true value
//	if(age>18){
//		printf("\nAge is valid");
//	}

//	if(age>=18){
//		printf("\nAge is valid");
//	}

	if(age<18){
		printf("\nAge is not valid");
	}
	
	getch();
}





