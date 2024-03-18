#include<stdio.h>
void main()
{
	int n;
	printf("Enter any number :  ");
	scanf("%d",&n);
	printf("\nyour number :%d",n);
	if(n%3==0&&n%5==0)
	{
	    printf("\n\n\tThe given number is divisible by both 3 & 5");
    }
    else
    {
    	printf("\n\n\tThe given number is not divisible by both 3 & 5");
	}
	
}
