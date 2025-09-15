#include<stdio.h>
#include<conio.h>

void main()
{
	int day;
	printf("Enter your numbr (0-7) : ");
	scanf("%d",&day);
	
	switch(day){
		
		case 1:
			printf("monday ");
			break;
		case 2:
			printf("Tusday ");
			break;
			
		case 3:
			printf("Wed");
			break;
		case 4:
			printf("trus ");
			break;
		case 5:
			printf("frid ");
			break;
		case 6:
			printf("stau ");
			break;
		case 7:
			printf("sunday ");
			break;	
		
		default:
			printf("invalid number :");
	}
	
	getch();
}
