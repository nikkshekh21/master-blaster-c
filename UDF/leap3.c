#include<stdio.h>
void leap(int f,int s);
void main()
{
	int f,s;
	printf("Enter the first year: ");
	scanf("%d",&f);
	printf("Enter the second year: ");
	scanf("%d",&s);
	leap(f,s);
	
	
}
void leap(int f,int s)
{
	int n=0;
	if(f<=s)
	{
		n=f%4==0;
		printf("\n%d",f);
		f+=4;
		leap(f,s);
	}
}