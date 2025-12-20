//Structure
//Student: Student:rollno,name,marks.

#include<stdio.h>
	struct student
	{
		int rollno;
		char name[20];
		int marks;
	};
	
	
void main()
{
	struct student s1,s2;
	s1.rollno = 101;
	strcpy(s1.name,"shreya");
	s1.marks = 75;
	
	s2.rollno = 102;
	strcpy(s2.name,"snehal");
	s2.marks = 90;
	
	printf("The rollno,name and marks of student1 is %d,%s and %d",s1.rollno,s1.name,s1.marks);
	printf("\n");
	printf("The rollno,name and marks of student2 is %d,%s and %d",s2.rollno,s2.name,s2.marks);
	
}