#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	int *p; // poniter trigger
	float num;
	float *ptr;
	
	printf("Enter your number :");
	scanf("%d",&n);
	
	p = &n;
	printf("\nnumber n : %d",n);
	printf("\npointer p :  %u",p); // addres
	printf("\npointer data *p : %u",*p); //value
	
	printf("Enter your num :");
	scanf("%f",&num);
	
	ptr = &num;
	printf("\nnumber n : %f",num);
	printf("\npointer p :  %u",ptr); // addres
	printf("\npointer data *p : %u",*ptr); //value
	
	
	getch();
}
