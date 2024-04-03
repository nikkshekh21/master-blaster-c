
#include<stdio.h>
main()
{
	int x,y,c;
	int *ptr=&x;
	int *ptr2=&y;

	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	printf("\n\nBefore swapping:\nx : %d ",*ptr);
	printf("y : %d",*ptr2);
    c=x;
	x=y;
	y=c;
	printf("\n\nAfter swapping:\nx : %d ",*ptr);
	printf("y : %d",*ptr2);
	
	
}