#include<stdio.h>
main()
{
	int sum=0,a,n;
		printf("enter any number: ");
		scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		sum+=a;
		
	}
	printf("the sum of all number: %d",sum);
}
