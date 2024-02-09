#include<stdio.h>
main()
{
	int n=1,a;
	printf("Enter any number: ");
	scanf("%d",&a);
	
	while(a>=n)
	{
		if(a%2==1)
		 {
		 	printf("%d\t",a);
		 }
		 a--;
	}
}
