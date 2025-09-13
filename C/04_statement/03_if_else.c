/*
	if(codition){
		...code true
	}
	else{
		...code false
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Age : %d",age);
	
	if(age >= 18){
		printf("\nAge is valid");
	}
	else{
		printf("\nAge is not Valid");
	}
	
	getch();
}
