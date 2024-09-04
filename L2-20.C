//simple calculator using switch case.
#include<stdio.h>
int main()
{
	int a,b, operation;
	printf("Enter 1st integers:");
	scanf("%d", &a);
	printf("Enter 2nd integers:");
	scanf("%d", &b);
	printf("Enter operation: 1.Addition 2.subtraction 3.Multiplication 4.Division \n");
	scanf("%d", &operation);
	
	switch (operation)
	{
		case 1: printf(" Resulut: %d",a+b);
		break;
		
		case 2: printf("Result : %d", a-b);
		break;
		
		case 3: printf("Result : %d", a*b);
		break;
		
		case 4: printf("Result :%d ", a/b);
		break;
	}
return 0;
}
