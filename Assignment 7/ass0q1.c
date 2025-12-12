//Sum of two numbers.
void sum(int *,int *);
int main()
{
	int no1,no2;
	printf("Enter no1 and no2: \n");
	scanf("%d %d",&no1,&no2);
	sum(no1,no2);
}
void sum(int *x,int *y)
{
	int res = *x + *y;
	printf("Result = %d",res);
}