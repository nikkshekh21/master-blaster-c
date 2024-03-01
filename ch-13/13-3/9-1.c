#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int s1,s2,i;
	printf("enter arry first number: ");
	scanf("%d",&s1);
	
	printf("enter arry second number: ");
	scanf("%d",&s2);
	
	int a[s2-s1], j=0;
	for(i=s1;i<=s2;i++)
	{
		if(i%4==0)
		{
		  	a[j] = i;
		  	j++;
		}
	}
	for(i=0; i<j; i++){
		printf("\n\n%d ",a[i]);
	}

	
	   
	
}
