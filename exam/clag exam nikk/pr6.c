#include<stdio.h>
	struct student 
	{
		char role[20];
		char name[20];	
	};
void main()
{
	int n;
	FILE *fp;
	fp=fopen("emp.txt","w");
	printf("Enter the number of studant: ");
	scanf("%d",&n);
   struct student s1[n];
   int i;
	for(i=0;i<n;i++)
	{
		printf("----:Enter The %d Employee record:---- \n\n",i+1);
		fflush(stdin);
		printf("Enter Employee name: ");
		scanf("%[^\n]",&s1[i].name);
	fflush(stdin);
		printf("Enter Employee role: ");
		scanf("%[^\n]",&s1[i].role);
	}
//	system("cls");		
	for(i=0;i<n;i++)
	{
 	fprintf(fp,"\n\t----:The %d empoloee record:---- \n\n",i+1);
		
	fprintf(fp,"\tThe name of employee: %s\n",s1[i].name);
	fprintf(fp,"\tThe role of employee: %s",s1[i].role);
   }
			
}