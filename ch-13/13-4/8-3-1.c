#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,i,j;
	p("enter arry first size: ");
	scanf("%d",&r);
	
	p("enter arry second size: ");
	scanf("%d",&c);
	int avg[r][c];
	
	p("\n\n----:enter arry elements:----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
		    s("%d",&avg[i][j]);
		}
		p("\n");
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",avg[i][j]);
		}
		p("\n");
    }
	int sum=0;
		p("\n\n----:avg of elements:----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			sum=sum+avg[i][j];
		}
		p("\n");
		
	}
		p("sum of elements: %d\n",sum);
		p("averang of elements: %d",sum/(r*c));
		
	
    


	
	
}
