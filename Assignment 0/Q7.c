//Converting given minuites into hours and remaining minuites.

void main()
{
	int min = 140;
	int hours = min / 60;
	int remaining_minuites = min % 60;
	
	printf("Total hours are %d and minuites are %d.\n",hours,remaining_minuites);
}