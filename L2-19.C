//Program to read a charachter and check whether it is smallcase/uppercase/digit/special symbol
#include<stdio.h>
int main()
{
	char ch;
	printf(" Enter any character:");
	scanf("%c", &ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf(" '%c' is uppercase alphapet:", ch);
		
	}
	else if (ch>='a' && ch<='z')
	{
		printf(" '%c' is lower case alphapet:", ch);
	}
	else if(ch>=0 && ch<=9)
	{
		printf(" '%c' is a digit:",ch);
	}
	else{
		printf("entered charachter is a special symbol");
	}
	return 0;
}
