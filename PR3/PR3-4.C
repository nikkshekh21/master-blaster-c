#include<stdio.h>
#include<conio.h>
main()
{
	int n,rem,sum=0,multi=1,value;
	clrscr();
	
	printf("enter any number: ");
	scanf("%d",&n);
	value=n;
	
	while(value!=0)
	{
		rem=value%10;
		sum+=rem;
		multi*=rem;
		value=value/10;
	}
	
		if(sum==multi)
	 {
			printf("\n!! %d is the magic number!!",n);
     }
         else 
         
     {
     	printf("\n!! %d is not magic number!!",n);
	 }
	getch();




}
