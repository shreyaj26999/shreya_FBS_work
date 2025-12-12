//Conversion from Celcius to Fahrenheit.
void convert(float*);
void main()
{
	float celcius;
	printf("Enter the temprature in celcius: \n");
	scanf("%f",&celcius);
	convert(&celcius);
}
void convert(float *x)
{
	float fahrenheit = (*x * 9/5) + 32;
	printf("The temprature in celcius is: %f\n",*x);
	printf("The temprature in fahrenheit is: %f",fahrenheit);
}