#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a[3] = {10,20,30};
	int *p = a;
	int i;
	
	for(i=0;i<3;i++){
		printf("\na[%d] : %d using pointer:",i,*(p+i));
	}	
	
	getch();
}
