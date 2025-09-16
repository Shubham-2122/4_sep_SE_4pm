#include<stdio.h>
#include<conio.h>

void main()
{
	int i,sum = 0;
	int n;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
//		printf("\n i : %d",i);

		sum = sum + i;
//		0 = 0 + 1 
//		1 = 1 + 2 
		
	}
	printf("sum : %d",sum);
	
	getch();
}
