#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	
//	append
	fp = fopen("data.txt","a");
	
	if(fp == NULL){
		printf("Error file open.\n");
		return 1;
	}
	
	fputs("This line data append method.\n",fp);

	fclose(fp);
	
//	printf("success data printed..");
	
	return 0;
}
