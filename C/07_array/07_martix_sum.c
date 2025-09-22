#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2],i,j;
	int b[2][2],sum[2][2];
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter your matrix %d row and %d col :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nFirst 2d array");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\nEnter your matrix %d row and %d col :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nSecond 2d array");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,b[i][j]);
		}
	}
	
	printf("\nSum matrix");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
		printf("\n sum data 2d array");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("\na[%d][%d] : %d",i,j,sum[i][j]);
		}
	}
	
	getch();
}
