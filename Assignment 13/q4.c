//HR(id,name,salary,allowance)


#include<stdio.h>
#include<string.h>
struct HR{
	int id;
	char name[50];
	float salary;
	float allowance;
};

void main()
{
	struct HR h1;
	
	printf("Enter HR's ID: ");
	scanf("%d",&h1.id);
	char temp[50];
	printf("Enter HR's name: ");
	scanf("%s",temp);
	strcpy(h1.name,temp);
	
	printf("Enter salary of HR: ");
	scanf("%f",&h1.salary);
	
	printf("Enter allowance of HR: ");
	scanf("%f",&h1.allowance);
	
	printf("\nHR Details:\n");
	printf("ID: %d\n",h1.id);
	printf("Name: %s\n",h1.name);
	printf("Salary: %f\n",h1.salary);
	printf("Allowance: %f\n",h1.allowance);
}