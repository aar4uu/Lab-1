//program to find simple interest
#include<stdio.h>
int main()
{
int t,p,r;

printf("enter the value of principal:");
scanf("%d",&p);

printf("enter the value rate:");
scanf("%d",&r);

printf("enter the value of time:");
scanf("%d",&t);

float sp=(p*t*r)/100;
printf("Simple intrest=%d", &sp);	
}
