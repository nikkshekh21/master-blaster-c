#include<stdio.h>
#include<conio.h>
main()
{
     int n;
     clrscr();
     printf("enter any number: ");
     scanf("%d",&n);
     if(n>0)
     {
	printf("%d number is positive!!",n);
     }
     else if(n<0)
     {
	printf("%d number is negative!!",n);
     }
     else if(n==0)
     {
	printf("%d number is neutral!!",n);
     }
     else
     {
	printf("please enter a number!!",n);
     }
     getch();
}