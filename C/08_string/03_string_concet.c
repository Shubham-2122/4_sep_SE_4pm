#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
//	1 bit 
	char str[100],str1[100];
	printf("Enter your string 1 : ");
	gets(str);
	
	printf("\nstr before concent : %s",str);
	
	printf("\nEnter your string 2 : ");
	gets(str1);
	
	strcat(str,str1);
	
	printf("str after concent : %s",str);
	
	strupr(str);
	
	printf("\nstr upper case : %s",str);
	
	strrev(str);
	printf("\nstr revser : %s",str);

	
		
	getch();
}
