#include<stdio.h>
main()
{
	


 int r,c;
 printf("Enter row size: ");
 scanf("%d",&r);
 printf("Enter column size: ");
 scanf("%d",&c);
 
 int a[r][c],i,j;
 printf("\n\nEnter the arry values:-\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 		printf("a[%d][%d]: ",i,j);
		scanf("%d",&a[i][j]);	
    }
 }
 printf("\n\nyour arry elements :--\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 		printf("%d ",a[i][j]);	
    }
    printf("\n");
 }
 int swap=0,k;
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c-1;j++)
 	{
 		for(k=0;k<c-j-1;k++)
 		{
 			if(a[i][k]>a[i][k+1])
 			{
 		    	swap= a[i][k];
 		    	a[i][k]=a[i][k+1];
 		 	    a[i][k+1]=swap;
			 }
 		 
		}
    }
    printf("\n");
 }
 printf("Accending\n");
 for(i=0;i<r;i++)
 {
 	for(j=0;j<c;j++)
 	{
 		printf("%d ",a[i][j]);	
    }
    printf("\n");
 }
 
 
}

