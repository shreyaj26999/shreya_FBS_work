//Time(hour,min,sec)

#include<stdio.h>

struct Time{
	int hour;
	int minuite;
	int seconds;
};

void main()
{
	struct Time t1;
	
	printf("Enter hours: ");
	scanf("%d",&t1.hour);
	
	printf("Enter total minuites: ");
	scanf("%d",&t1.minuite);
	
	printf("Enter total seconds: ");
	scanf("%d",&t1.seconds);
	
	printf("\nTIME:\n");
	printf("Hours = %d\n",t1.hour);
	printf("Minuites = %d\n",t1.minuite);
	printf("Seconds = %d\n",t1.seconds);
}