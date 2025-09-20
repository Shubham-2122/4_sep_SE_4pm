#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i;
	int sum=0;
	
	for(i=0;i<10;i++){
		printf("Enter your elemenets : ");
		scanf("%d",&a[i]);
		sum = sum + a[i];
	}
	
	for(i=0;i<10;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	printf("\nSum : %d",sum);
	
	getch();
}
