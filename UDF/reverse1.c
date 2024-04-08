#include<stdio.h>
int reverse(int n);
void main()
{
	int n;
	printf("Enter any number: ");
	scanf("%d",&n);
	printf("::Reverse number::\n");
	reverse(n);
}
int reverse(int n)
{
	int rem,rev=0;
	if(n!=0)
	{
		rem=n%10;
		n=n/10;
		printf("%d",rem);
		reverse(n);
	}
}