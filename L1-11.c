//to reaad time in total seconds and convert it into time
#include<stdio.h>;
int main(){
	float sec,min,hour;
	printf("enter time in seconds \n");
	scanf("%f",&sec);
	
	min=sec/60;
	hour=min/sec;
	
	printf("time in hours is %f \n" ,hour);
	printf("time in min is %f \n" ,min);
	return 0;
}
