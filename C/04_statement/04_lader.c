/*
	
	if(coditon){
		...code
	}
	else if(coditon){
		..code
	}
	else{
		...code
	}

*/
#include<stdio.h>
#include<conio.h>

void main()
{
	int num;
	printf("Enter your guess (0-100) : ");
	scanf("%d",&num);
	
	printf("guess num : %d",num);
	
	if(num > 100 || num < 0){
		printf("\nguess num invalid : %d",num);
	}
//	80 > 100 
	else if(num >= 80 && num<=100){
		printf("\n A grade : %d",num);
	}
	else if(num >= 60 && num<80){
		printf("\n B grade : %d",num);
	}
	else if(num <60 && num>=40){
		printf("\n C grade : %d",num);
	}
	else{
		printf("\nguess num faild : %d",num);
	}
	
	getch();
}
