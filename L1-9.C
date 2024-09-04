//to read time in hours,min,second and convert to total second
#include<stdio.h>
int main(){
	int hours,min,sec,time;
	
	printf("enter no. of hours \n");
	scanf("%d/n ",&hours);
	
	printf("enter no. of minutes \n ");
	scanf("%d/n",&min);
	
	printf("enter no. of seconds \n ");
	scanf("%d/n",&sec);
	
	time=(hours*3600)+(min*60)+sec;
	
	printf("time in total seconds:%d",time);
	return 0;

}
