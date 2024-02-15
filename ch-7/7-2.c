#include<stdio.h>
main()
{
	 int a,b,c,d;
	 printf("enter a value of the first number: ");
	 scanf("%d",&a);
	 printf("enter a value of the second number: ");
	 scanf("%d",&b);
	 printf("enter a value of the third number: ");
	 scanf("%d",&c);
	 printf("enter a value of the fourth number: ");
	 scanf("%d",&d);
	 if(a>b)
	 {
		if(a>c)
		{
			if(a>d)
			{
				printf("the maximum value is : %d",a);
			}
			else
			{
				printf("the maximum value is : %d",d);

			}
		}
		else
		{
			printf("the maximum value is : %d",c);
		}
	 }
	 else
	 {
		if(b>d)
		{
			if(b>d)
			{
				printf("the maximum value is : %d",b);
			}
			else
			{
				printf("the maximum value is : %d",d);
			}
		}
		else
		{
			printf("the maximum value is : %d",d);
		}
	 }







}
