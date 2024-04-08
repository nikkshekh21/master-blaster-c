/*Q.1 Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school*/
#include<stdio.h>
	struct student 
	{
		int id;
		int age;
		int standard;
		char school[20];
		char course[20];
		char city[20];
		int rollNo;
		char name[20];
		float per;	
	};
void main()
{
	struct student s1;
	printf("Enter student id: ");
	scanf("%d",&s1.id);
	fflush(stdin);
	printf("Enter student name: ");
	scanf("%[^\n]",&s1.name);
	printf("Enter student age: ");
	scanf("%d",&s1.age);
	fflush(stdin);	
	printf("Enter student course: ");
	scanf("%[^\n]",&s1.course);
	fflush(stdin);
	printf("Enter student city: ");
	scanf("%[^\n]",&s1.city);
	fflush(stdin);
	
	printf("Enter student standard: ");
	scanf("%d",&s1.standard);
	fflush(stdin);	
	printf("Enter student school: ");
	scanf("%[^\n]",&s1.school);			
}
	
