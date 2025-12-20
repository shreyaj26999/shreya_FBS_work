//Date(Date,month,year)

#include<stdio.h>
#include<string.h>
struct Date{
	int date;
	int month;
	int year;
};

void main()
{
	struct Date d1;
	
	printf("Enter the date: ");
	scanf("%d",&d1.date);
	
	printf("Enter the month: ");
	scanf("%d",&d1.month);
	
	printf("Enter the year: ");
	scanf("%d",&d1.year);
	
	printf("\nDATE: \n");
	printf("Date = %d\n",d1.date);
	printf("Month = %d\n",d1.month);
	printf("Year = %d\n",d1.year);
}