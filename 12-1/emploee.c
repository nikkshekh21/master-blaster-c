/*
Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name*/
#include<stdio.h>
	struct student 
	{
		int id;
		int age;
		float experience;
		char company_name[20];
		char role[20];
		char city[20];
		char name[20];	
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
	printf("Enter Employee id: ");
	scanf("%d",&s1[i].id);
	fflush(stdin);
	printf("Enter Employee name: ");
	scanf("%[^\n]",&s1[i].name);
	printf("Enter Employee age: ");
	scanf("%d",&s1[i].age);
	fflush(stdin);	
	printf("Enter Employee role: ");
	scanf("%[^\n]",&s1[i].role);
	fflush(stdin);
	printf("Enter Employee Company_name: ");
	scanf("%[^\n]",&s1[i].company_name);
	fflush(stdin);	
	printf("Enter Employee experience: ");
	scanf("%f",&s1[i]. experience);
	fflush(stdin);
	printf("Enter Employee city: ");
	scanf("%[^\n]",&s1[i].city);
	}
	system("cls");		
	for(i=0;i<n;i++)
	{
 	printf("\t----:The %d studant record:---- \n\n",i+1);

	printf("\n\tID\tNAME\tAGE\tROLE\tCOMPANY NAME\tEXPERIENCE\tCITY\n");	
		
	printf("\n\t%d\t%s\t%d\t%s\t%s\t\t%.1f\t\t%s",s1[i].id,s1[i].name,s1[i].age,s1[i].role,s1[i].company_name,s1[i].experience,s1[i].city);

   }
			
}