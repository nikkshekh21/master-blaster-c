#include<stdio.h>
main()
{
	int multi=1,a,n;
		printf("enter any number: ");
		scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		multi*=a;
		
	}
	printf("the sum of all number: %d",multi);
}
