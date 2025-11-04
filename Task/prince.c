#include<stdio.h>
#include<conio.h>

void main(){
	
   int num, index = 0;
   printf("Eneter a number:",num);
   scanf("%d",&num);
   
   do{
   	printf("\n%d",index++);
   	
   }while(index < num);
	
	getch();
}
