#include<stdio.h>
#include<conio.h>
main()
{
	int rev,rem,count=0,n;
	clrscr();
	printf("Enter any number: ");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
		count++;
	}
	printf("\nThe total number of digit is: %d",count);
    getch();
}
