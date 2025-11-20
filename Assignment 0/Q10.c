//Finding total marks and percentage.

void main()
{
	int total_sum = 150;
	int sub1 = 30, sub2 = 28, sub3 = 27, sub4 = 29, sub5 = 30;
	int obtained_total = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("The total marks are: %d\n",obtained_total);
	
	int percentage = (obtained_total * 100) / total_sum;
	printf("The percentage obtained in five subjects is: %d\n",percentage);
}