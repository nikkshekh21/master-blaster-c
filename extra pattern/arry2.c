#include<stdio.h>
main()
{
	int s1,s2,i;
	printf("enter arry first size: ");
	scanf("%d",&s1);
	int a[s1];
	
	printf("enter arry second size: ");
	scanf("%d",&s2);
	int b[s2];
	
	
	int sum=a[s1]+b[s2];
	printf("\n\n-----enter first arry s1 size------\n");
	for(i=0;i<=s1;i++)
	{
		printf("enter i[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n-----enter second arry s2 size------\n");
	for(i=0;i<=s2;i++)
	{
		printf("enter i[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\n\n-----sum of the a,b arry------\n");
	for(i=0;i<=s1;i++)
	{
		sum=i[%d]+i[s1];
		printf("enter i[%d]+i[s1]: ",i);
		
	 
	}
	printf("total arry size: %d",sum)
	
}
