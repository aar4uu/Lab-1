// Program to print max from three numbers
#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter the values of a,b,c \n");
	scanf("%d %d %d",&a ,&b ,&c);

	if(a>b)
	{
		if(a>c)
		{
			printf("max is %d",a);
		}
		else{
			printf("max is %d",c);
		}
}
	else
	{
		if(b>c)
		{
			printf("max is %d",b);
			
		}
		else{
			printf("max is %d",c);
		}
	}
	return 0 ;
}

