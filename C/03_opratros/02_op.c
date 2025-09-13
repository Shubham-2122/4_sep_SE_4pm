#include<stdio.h>
#include<conio.h>

void main(){
	
	float a;
	float b;
//	float c = 50;
	
	float c;
	
	printf("Enter your a : ");
	scanf("%f",&a);
	
	printf("\nEnter your b : ");
	scanf("%f",&b);
	
	printf("a : %.2f \nb : %.2f",a,b);
	 
	c = a+b;
	printf("\nsum => %f",c); 
	
	c = a-b;
	printf("\nsub => %f",c);
	
	c = a*b;
	printf("\nmul => %f",c);
	
	c = a/b;
	printf("\ndivi => %f",c);   
	getch();
}
