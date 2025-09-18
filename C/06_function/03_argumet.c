#include<stdio.h>
#include<conio.h>

// 2) with argumnet and no retunn value
void sum(int x,int y){
	int sum1;
	sum1 = x+y;
	printf("\nsum => %d",sum1);
}

int main()
{
//	call value
	sum(30,20);
	sum(40,20);
	sum(60,30);
	return 0;
}
