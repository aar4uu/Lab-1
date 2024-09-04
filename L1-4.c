//Program to convert the temp from Fahrenheit to celsius.
#include<stdio.h>
int main()
{
	float c,f;
	printf("enter temperature in fahrenheit:");
	scanf("%f", &f);
	
	c=(f-32)*5/9;
	
	printf("%.2f fahrenheit=%.2f celsius", f,c);
	
	return 0;
}
