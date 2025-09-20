#include<stdio.h>
#include<conio.h>

void main(){
	
	int a[5] = {10,20,30,40,50};
	int i;
	
	for(i=0;i<5;i++){
		printf("\na[%d] : %d",i,a[i]);
	}
	
	getch();
}
