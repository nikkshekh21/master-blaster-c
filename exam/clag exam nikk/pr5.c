#include<stdio.h>
struct house
{
	int room_quantity;
	int established_year;
	char city[20];
	
};
void main()
{	
	
	int n,i;
	printf("The numbar of house:=");
	scanf("%d",&n);
	struct house h1[n];
	for(i=0;i<n;i++)
	{
		printf("----:Enter The %d hotal record:---- \n\n",i+1);
		printf("Enter room quantity: ");
		scanf("%d",&h1[i].room_quantity);
		printf("Enter hotal established year: ");
		scanf("%d",&h1[i].established_year);
		fflush(stdin);
		printf("Enter city :");
		scanf("%s",&h1[i].city);
	}
	 system("cls");		
		for(i=0;i<n;i++)
	{
		printf("Enter room quantity: %d\n",h1[i].room_quantity);
		printf("Enter hotal established year: %d \n",h1[i].established_year);
		printf("Enter city :%s\n",h1[i].city);
	
	}
	
	
	
}
	
