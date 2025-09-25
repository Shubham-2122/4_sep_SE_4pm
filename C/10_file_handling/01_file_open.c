#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	
//	write
	fp = fopen("test.txt","w");
	
	if(fp == NULL){
		printf("Error file open.\n");
		return 1;
	}
	
	fprintf(fp,"hello this test file.\n");
//	fputs("this is new line.\n");
	
	fclose(fp);
	
	printf("success data printed..");
	
	return 0;
}
