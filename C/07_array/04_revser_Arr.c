#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i;
	
	for(i=0;i<5;i++){
		printf("enter your Elements :");
		scanf("%d",&a[i]);
	}
	
	printf("\nReverse of array");
	
	for(i=4;i>=0;i--){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	getch();
}
