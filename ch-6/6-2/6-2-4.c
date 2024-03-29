#include<stdio.h>
#include<conio.h>
main()
{
	int i,a=0,n,b=1,c;
	clrscr();
	printf("Enter a last number: ");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	printf("--:fibonacci series:--\n");
	for(i=3;i<=n;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	getch();

}
