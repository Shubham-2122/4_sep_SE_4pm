#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	
	for(i=0;i<5;i++){
		
//		space
		for(k=0;k<4-i;k++){
			printf(" ");
		}
		
//		printf
		for(j=0;j<=i;j++){
			printf(" *");
		}
		printf("\n");
		
	}
	
	getch();
}
