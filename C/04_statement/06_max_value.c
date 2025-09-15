#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("enter your A value : ");
	scanf("%d",&a);
	printf("enter your B value : ");
	scanf("%d",&b);
	printf("enter your C value : ");
	scanf("%d",&c);
	
	if(a>b){
		if(a>c){
			printf("%d is max ",a);
		}
		else{
			printf("%d is max  ",c);
		}
	}
	else if(b>c){
		printf("%d is max ",b);
	}
	
	else{
		printf("%d is max ",c);
	}
	
	getch();
}
