//Sum of numbers in given range.find sum of numbers from start to end.start = 1,end = 5.

void main(){
	int i = 1,sum = 0;
	while(i <= 5)
	{
		sum = sum + i;
		i++;
	}
	printf("Sum = %d\n",sum);
}