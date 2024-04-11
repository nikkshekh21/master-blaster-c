 /*Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Enter details of Student 2:
Roll no => 122
Name => Divya Sharma
Chemistry => 92
Mathematics => 80
Physics => 84*/
#include<stdio.h>
	struct student 
	{
		int Roll_no;
		float chemistry;
		float mathematics;
		float physics;
		char name[20];	
	};
void main()
{
	int n,total,mrks;
	printf("Enter the number of studant: ");
	scanf("%d",&n);
   struct student s1[n];
   int i;
	for(i=0;i<n;i++)
	{
		printf("----:Enter The %d studant record:---- \n\n",i+1);

	
	printf("Enter student Roll no: ");
	scanf("%d",&s1[i].Roll_no);
	fflush(stdin);
	printf("Enter student name: ");
	scanf("%[^\n]",&s1[i].name);
	
	printf("Enter student chemistry: ");
	scanf("%f",&s1[i].chemistry);
	fflush(stdin);
	printf("Enter student mathematics: ");
	scanf("%f",&s1[i].mathematics);
	fflush(stdin);	
	printf("Enter student physics: ");
	scanf("%f",&s1[i].physics);

	}
	system("cls");		
	for(i=0;i<n;i++)
	{	
	printf("\n\n\t----:The %d studant record:---- \n\n",i+1);

	printf("\n\tNAME\t\tROLLNO|\tCHEMISTRY\tMATHEMATICS\tPHYSICS\t\n");	
	printf("\n\t____\t\t______\t_________\t___________\t_______\t\n");	
		
	printf("\n\t%s\t\t%d\t%.2f\t\t%.2f\t\t%.2f\t",s1[i].name,s1[i].Roll_no,s1[i].chemistry,s1[i].mathematics,s1[i].physics);
	for(i=0;i<n;i++)
	{
   float total=s1[i].chemistry+s1[i].mathematics+s1[i].physics;
	float per=total/300*100;
	printf("\n\nTOTAL MARKS: %.2f%%",total")
   
	printf("\n\nPERSENTAGE: %.2f%%",per);
    }
   }
			
}
	