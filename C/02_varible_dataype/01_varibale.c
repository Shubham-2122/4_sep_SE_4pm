// varibale :- To store a data/value in single varibale name
// 1) primitive :- single value and 2) non-primitive :- multiple value

//Rules 
//1) do not start with number (9shu)
//2) do not start with symbols (_$#ssadjh) 
//3) do not start spacial / keyword (int main,p)
//keyword :- 32 

// shubham , Shubham :- ASCII Value :-  American Standard Code for Information Interchange
	
//	datatype vari-name = value;

#include<stdio.h>
#include<conio.h>

void main(){

	//1) int 
	int a = 10; // 2bytes
	int b = 20; //2bytes
	int c = 25.56; // 2bytes
	int d = -30;
	
	//2) decimal	
	float salary = 4000.4567; //4bytes
	
	// string	
	char name1 = 'A'; // 1bytes
	char surname = 'patel';
	
	printf("a : %d\n",a);
	printf("b : %i\n",b);
	printf("c : %i",c);
	printf("\nd : %i",d);
	
	printf("\nsalary %f",salary);
	printf("\nsalary %.1f",salary);
	printf("\nsalary %.2f",salary);
	printf("\nsalary %.f",salary);
	
	printf("\nname : %c",name1);
	printf("\n surname : %c",surname);
	
	
	getch();
}
