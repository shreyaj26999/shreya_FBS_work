//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)

void main()
{
	int age = 90;
	
	if(age < 12)
	{
		printf("The person is Child.\n");
	}
	else if(age >= 12 && age <= 19)
	{
		printf("The person is a Teenager.\n");
	}
	else if(age >= 20 && age <= 59)
	{
		printf("The person is Adult.\n");
	}
	else if(age >= 60)
	{
		printf("The person is Senior.\n");
	}
}