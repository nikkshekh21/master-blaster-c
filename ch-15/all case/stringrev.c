#include<stdio.h>
main()
{
	int r,array[50], len=0;
	printf("Enter your string: ");
	scanf("%[^\n]",&r);
	int rev[r],a[r],i;
	
	for(i=0;i!=NULL;i++)
	{
		len++;
	}
	printf("lenth of your string: %d",len);
	
	for(i=0;i<len;i++)
	{
		rev[i]=a[i];
	}
	printf("---:Your string:---\n");
		for(i=0;i<len;i++)
	{
		printf("\n%d ",a[i]);
	}
	printf("\n\n---:revers:--\n");
	
	for(i=0;i<len;i++)
	{
		a[i]= rev[r- i- 1];
	}
	for(i=0;i<len;i++)
	{
		printf("%d",a[i]);
	}
	
}