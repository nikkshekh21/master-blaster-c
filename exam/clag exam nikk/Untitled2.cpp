#include<stdio.h>
 main()
{
	int n,rem,rev;
	printf("Enter your number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("\tYour number in reverse:-%d",rev);
}