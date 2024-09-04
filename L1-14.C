#include<stdio.h>
int main()
{
	char ch;
	int ascii;
	
	printf("Enter your character here: \n ");
	scanf("%c", &ch);
	
	ascii=ch;
	
	if(ascii >=65 && ascii<=90)
	{
		printf(" The charcter you entered is a capital case letter");
	}
	
	else if(ascii>=97 && ascii<=122)
	{
		printf(" The charcter you enterd is a small case letter");
	}
	
	else if (ascii>=48 && ascii<=57)
	{
		printf("The charcter you enterd is a digit");
	}
	
	else if ((ascii >=32 && ascii<=47) ||
	         (ascii >=58 && ascii<=64)	||
	         (ascii >= 91 && ascii <=96) ||
	         (ascii>=123 && ascii <=126))
	         
	{
		printf(" The character you enterd is a special character! \n");
	}
	
	else 
	{
		printf(" Unknown Character! \n");
	}
	
	return 0;
}
