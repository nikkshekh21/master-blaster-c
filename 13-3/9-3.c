#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int s1,i;
	printf("enter arry size: ");
	scanf("%d",&s1);
	int a[s1];

	
	p("\n\n----:enter arry elements:----\n");
	for(i=0;i<s1;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	printf("\n\n---:squares of elements:--\n");
	for(i=0;i<s1;i++)
	
	   printf("%d, ",a[i]*a[i]);
}
