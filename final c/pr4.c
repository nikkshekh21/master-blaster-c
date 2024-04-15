#include<stdio.h>
#define p printf
#define s scanf

main()
{
	int n,i;
	p("Enter the array's size : ");
	s("%d",&n);
	
	int a[n];
	int *square[n];
	
	for(i=0;i<n;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		square[i] = &a[i];
	}
	
	p("\n\n-----Square of each element:-----\n");
	for(i=0;i<n;i++)
	{
		p("\n\ta[%d] : %d",i,(*square[i])*(*square[i]));
	}
}