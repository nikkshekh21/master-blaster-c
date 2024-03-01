#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int r,c,i,j;
	p("enter arry row  size: ");
	scanf("%d",&r);
	
	p("enter arry column size: ");
	scanf("%d",&c);
	
	int a[r][c];
	int b[r][c];
	
	p("\n\n----:enter first arry elements:----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
		    s("%d",&a[i][j]);
		}
		p("\n");
		
	}
		p("\n\n----:enter second arry elements:----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("a[%d][%d] : ",i,j);
		    s("%d",&b[i][j]);
		}
		p("\n");
		
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",a[i][j]);
		}
		p("\n");
    }
    	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d ",b[i][j]);
		}
		p("\n");
    }
	int d[r][c];
		p("\n\n----:C array:----\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			d[i][j]=a[i][j]+b[i][j];
			p("array sum[%d][%d]: %d\n",i,j,d[i][j]);
		}
		p("\n");
		
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			p("%d  ",d[i][j]);
		}
		p("\n");
		
	}

		
		
	
    


	
	
}
