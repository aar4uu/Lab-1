#include<stdio.h>
int main()
{
	int phy,chem,maths,bio,eng;
	float percentage;
	printf("enter the five subject marks: \n");
	scanf("%d %d %d %d %d",&phy, &chem, &maths, &bio, &eng);
	percentage=(phy+chem+maths+bio+eng)/5.0;
	
	printf("Percentage=%.2f\n", percentage);
	if (percentage>=90)
	{
		printf("Grade A");
	}
	else if(percentage>=80)
	{
		printf("Grade B");
	}
	else if(percentage>=70)
	{
		printf(" Grade C");
	}
	else if(percentage>=60)
	{
		printf("Grade D");
	}
	else if(percentage>=40)
	{
		printf("Grade E");
	}
	else 
	{
		printf("Grade F");
	}
	return 0;
}
