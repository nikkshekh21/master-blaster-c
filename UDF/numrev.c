#include<stdio.h>
int b1(int a);
main()
{
	int a;
	printf("Enter your name: ");
	scanf("%d",&a);
	b1(a);
}
int b1(int a)
{
	int i ,j,numbe=0;
	int array[100];
	for(i=0;number>=0;i++)
	{
		array[i]=number % 2;
		number=number / 2;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%d",array[j]);
	}
}