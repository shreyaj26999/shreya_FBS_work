//Admin(id,name,salary,allowance)

#include<stdio.h>
#include<string.h>
struct Admin{
	int id;
	char name[50];
	float salary;
	float allowance;
};

void main()
{
	struct Admin a1;
	
	printf("Enter Admin ID: ");
	scanf("%d",&a1.id);
	char temp[50];
	printf("Enter Admin name: ");
	scanf("%s",temp);
	strcpy(a1.name,temp);
	
	printf("Enter salary of Admin: ");
	scanf("%f",&a1.salary);
	
	printf("Enter allowance of admin: ");
	scanf("%f",&a1.allowance);
	
	printf("\nAdmin Details:\n");
	printf("ID: %d\n",a1.id);
	printf("Name: %s\n",a1.name);
	printf("Salary: %f\n",a1.salary);
	printf("Allowance: %f\n",a1.allowance);
}