//employee:id,name and salary.
#include<stdio.h>
struct Employee 
{
	int id;
	char name[20];
	int salary;
};

void main()
{
	struct Employee emp1,emp2;
	emp1.id = 1;
	strcpy(emp1.name,"jay");
	emp1.salary = 23000;
	
	emp2.id = 2;
	strcpy(emp2.name,"piyush");
	emp2.salary = 30000;
	
	printf("Id,name and salary of emp1 are %d,%s and %d",emp1.id,emp1.name,emp1.salary);
	printf("\n");
	printf("Id,name and salary of emp1 are %d,%s and %d",emp2.id,emp2.name,emp2.salary);
}