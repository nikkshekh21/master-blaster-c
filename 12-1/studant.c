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
		char name[20];
		float per;	
	};
void main()
{
	int n;
	printf("Enter the number of studant: ");
	scanf("%d",&n);
   struct student s1[n];
   int i;
	for(i=0;i<n;i++)
	{
		printf("----:Enter The %d studant record:---- \n\n",i+1);
	printf("Enter student id: ");
	scanf("%d",&s1[i].id);
	fflush(stdin);
	printf("Enter student name: ");
	scanf("%[^\n]",&s1[i].name);
	printf("Enter student age: ");
	scanf("%d",&s1[i].age);
	fflush(stdin);	
	printf("Enter student course: ");
	scanf("%[^\n]",&s1[i].course);
	fflush(stdin);
	printf("Enter student standard: ");
	scanf("%d",&s1[i].standard);
	fflush(stdin);	
	printf("Enter student school: ");
	scanf("%[^\n]",&s1[i].school);
	fflush(stdin);
	printf("Enter student city: ");
	scanf("%[^\n]",&s1[i].city);
	printf("Enter student per: ");
	scanf("%f",&s1[i].per);
	}
	system("cls");		
	for(i=0;i<n;i++)
	{
		
	printf("----:The %d studant record:---- \n\n",i+1);

	printf("\n\tID\tNAME\tAGE\tCOURSE\tSTANDARD\tSCHOOL\tCITY\tPER\n");	
	printf("\n\t__\t____\t___\t______\t________\t______\t____\t___\n");	
		
	printf("\n\t%d\t%s\t%d\t%s\t%d\t\t%s\t%s\t%.2f",s1[i].id,s1[i].name,s1[i].age,s1[i].course,s1[i].standard,s1[i].school,s1[i].city,s1[i].per);

   }
			
}
	