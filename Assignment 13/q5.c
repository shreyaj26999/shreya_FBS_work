//SalesManager(id,name,salary,incentive,target)

#include<stdio.h>
#include<string.h>

struct Salesmanager{
	int id;
	char name[30];
	float salary;
	float incentive;
	int target;
};

void main()
{
	struct Salesmanager s1;
	
	printf("Enter id of SalesManager: ");
	scanf("%d",&s1.id);
	char temp[30];
	
	printf("Enter name of SalesManager: ");
	scanf("%s",temp);
	strcpy(s1.name,temp);
	
	printf("Enter salary: ");
	scanf("%f",&s1.salary);
	
	printf("Enter incentive: ");
	scanf("%f",&s1.incentive);
	
	printf("Enter target: ");
	scanf("%f",&s1.target);
	
	printf("\nSalesManager Details: "\n);
	printf("ID = %d\n",s1.id);
	printf("Name = %s\n",s1.name);
	printf("Salary = %f\n",s1.salary);
	printf("Incentive = %f\n",s1.incentive);
	printf("Target = %f\n",s1.target);
	
}