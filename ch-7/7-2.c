#include<stdio.h>
#include<conio.h>
main()
{
	 int a,b,c;
	 clrscr();
	 printf("enter a value of the first number: ");
	 scanf("%d",&a);
	 printf("enter a value of the second number: ");
	 scanf("%d",&b);
	 printf("enter a value of the third number: ");
	 scanf("%d",&c);
	 if(a<b)
	 {
		if(a<c)
		{
			printf("the minimum value is : %d",a);
		}
		else
		{
			printf("the minimum value is : %d",c);
		}
	 }
	 else
	 {
		if(b<c)
		{
			printf("the minimum value is : %d",b);
		}
		else
		{
			printf("the minimum value is : %d",c);
		}
	 }







     getch();
}
