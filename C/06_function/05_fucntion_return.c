#include<stdio.h>
#include<conio.h>

// 3) with argument and retunr value 

int sub(int a,int b){
//	int substr = a-b;
//	return substr;
	return a-b;
}

int main()
{
	int x = sub(40,20);
	printf("sub : %d",x);
	printf("\nsub : %d",sub(60,20));
	return 0;
}
