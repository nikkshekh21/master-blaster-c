#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a value of the first number: ");
	scanf("%d",&a);
	printf("enter a value of the second number: ");
	scanf("%d",&b);
	printf("enter a value of the third number: ");
	scanf("%d",&c);
	(a<b)?
			(a<c)
		         ?printf("the minimum value : %d",a)
		         :printf("the minimum value :%d",c)
		: (b<c)
		         ?printf("the minimum value : %d",b)
		         :printf("the minimum value :%d",c);
		         
	


}
