#include<stdio.h>
#include<conio.h>
main()
{
	int rev,rem,count=0,a;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&a);
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
		count++;
	}
	printf("the total number of digit: %d",count);
	getch();
}
