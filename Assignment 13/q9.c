//Complex(real,imaginary)

#include<stdio.h>

struct Complex{
	float real;
	float imaginary;
};

void main()
{
	struct Complex c1;
	
	printf("Enter the real number: ");
	scanf("%f",&c1.real);
	
	printf("Enter the imaginary number: ");
	scanf("%f",&c1.imaginary);
	
	printf("\nCOMPLEX:\n");
	printf("Real = %f\n",c1.real);
	printf("Imaginary = %f",c1.imaginary);
}