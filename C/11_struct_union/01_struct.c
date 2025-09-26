#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student{
	int rollno;
	char name[20];
	float marks;
};

void main()
{
//	struct Student s1 = {101,"shubham"};
	struct Student s1;
	
	printf("Enter your rollno : ");
	scanf("%d",&s1.rollno);
	
	printf("Enter your name : ");
//	gets(s1.name);
//	scanf("%[^\n]s",s1.name);
	scanf("%s",s1.name);
	
	printf("Enter your Marks : ");
	scanf("%f",&s1.marks);
	
	printf("\n----student details -----");
	printf("\nStundet rollno : %d",s1.rollno);
	printf("\nStundet name : %s",s1.name);
	printf("\nStundet marks : %.1f",s1.marks);
	
	getch();
}
