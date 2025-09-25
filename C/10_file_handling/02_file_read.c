#include<stdio.h>
#include<conio.h>

int main()
{
	FILE *fp;
	char str[100];
	
//	read
	fp = fopen("data.txt","r");
	
	if(fp == NULL){
		printf("Error file open.\n");
		return 1;
	}
	
	while(fgets(str,100,fp) != NULL){
		printf("%s",str);
	}

	fclose(fp);
	
//	printf("success data printed..");
	
	return 0;
}
