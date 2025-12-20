//Distance(feet,inch)

#include<stdio.h>

struct Distance{
	float feet;
	float inch;
};

void main()
{
	struct Distance d1;
	
	printf("Enter the feets: ");
	scanf("%f",&d1.feet);
	
	printf("Enter total inches: ");
	scanf("%f",&d1.inch);
	
	printf("\nDISTANCE:\n");
	printf("Feets = %f\n",d1.feet);
	printf("Inches = %f",d1.inch);
}