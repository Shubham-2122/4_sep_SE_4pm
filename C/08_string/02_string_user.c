#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
//	1 bit 
	char str[100],str1[100];
	char str2[100];
	int l1,x;

	printf("Enter your string : ");
//	scanf("%s",&str);
	gets(str);
	
	printf("Name : %s",str);
	
	l1 = strlen(str);
	
	printf("\nstring of length : %d",l1);
	
	strcpy(str1,str);
	
	printf("\nstring 1 copy : %s",str1);
	
	printf("\nEnter your second string : ");
	gets(str2);
	
	printf("\nstring second : %s",str2);
	
	x = strcmp(str,str2);
	
	if(x == 0){
		printf("\nString are match...!");
	}
	else{
		printf("\nString are not match..!");
	}
		
	getch();
}
