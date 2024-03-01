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
			if(i==0||j==0||i==r-1||j==c-1)
			{
				printf("%d ",a[i][j]);
			}
		}
		p("\n");
    }
}
    
