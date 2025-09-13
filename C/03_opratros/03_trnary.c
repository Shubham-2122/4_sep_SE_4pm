#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a = 20;
	int b = 10;
	int max;
	
//	trnary op
//  max = (a>b) ? a : b;
    
	max = (a<b) ? a : b;
    printf("max value : %d",max);
	
	getch();
}
