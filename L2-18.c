// find max using conditional operator
#include<stdio.h>
void main()
{
	int n1,n2,n3,temp,result;
	printf("enter the value of 3 no");
	scanf("%d %d %d",&n1, &n2, &n3);
	temp=(n1>n2)?n1:n2;
	result=(temp>n3)?temp:n3;

	printf("the biggest no is%d",result);
	}
