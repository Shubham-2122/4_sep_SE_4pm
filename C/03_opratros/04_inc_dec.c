#include<stdio.h>
#include<conio.h>

void main(){
	
//	inc ++ 
//  pre ++value
// post value++

	int a = 10;
	printf("a : %d",a);
	
	a++; 
	printf("\na : %d",a);
	++a;
	printf("\na : %d",a);
//	 12 + 1 = 13 :- pre value
	printf("\na : %d",++a);
	
//	post ince
	printf("\na : %d",a++);
	
	printf("\na : %d",a);
	
	a--;
	printf("\na : %d",a);
	--a;
	printf("\na : %d",a);
	printf("\na : %d",--a);
	printf("\na : %d",a--);
	
	printf("\na : %d",a);
	getch();
}
