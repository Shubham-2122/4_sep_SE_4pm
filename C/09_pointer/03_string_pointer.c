#include<stdio.h>
#include<conio.h>

void main()
{
	
	char str[] = "Hello"; //string store
	char *p = str;	 // pointer store
	
	printf("\nstring : %s",str);
	printf("\nusing pointer = %s\n", p);
	
	while(*p != '\0'){
		printf("%c ",*p);
		p++;
	}
	
	getch();
}
