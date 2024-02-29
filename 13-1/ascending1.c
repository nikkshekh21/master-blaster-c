#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int s1,i,j,swap;
	printf("enter arry first size: ");
	scanf("%d",&s1);
	int a[s1];
	p("\n\n----:enter arry value:----\n");
	for(i=0;i<s1;i++)
	{
		p("a[%d] : ",i);
		s("%d",&a[i]);
	}
	
    for(i=0;i<s1;i++)
	{
		for(j=i+1;j<s1;j++)
		{
			if(a[i]>a[j])
			{
				swap=a[i];
				a[i]=a[j];
				a[j]=swap;
				
			}
			
		}
		
	}
	p("---------:the value in ascending order:---------\n\n\n");
	for(i=0;i<s1;i++)
	{
		p("%d\t",a[i]);
	}
}
