/*
	int a = 1
	for(assigment;coiditon;inc/dec){
			for(assigment;coiditon;inc/dec){
		}
	}
*/ 

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int row,col;
	
	for(row = 1;row<=5;row++){
		for(col = 1;col<=5;col++){
			printf(" *");
		}
		printf("\n");
		
	}
	
	
	getch();
}
