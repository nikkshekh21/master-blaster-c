#include<stdio.h>
void cube(int n)

{
	printf("\n\n\tThe cube of your digit: %d\n",n*n*n);
}

void main()
{
	int n;
	printf("Enter any number :  ");
	scanf("%d",&n);
	cube(n);
}
