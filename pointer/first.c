#include<stdio.h>
main()
{
	int n=10;
	int *ptr;
	char r;
	char *pre;
	ptr=&n;
	printf("Your n value : %d\n",n);
	printf("Your ptr value : %d\n\n",*ptr);
	printf("Your n address : %d\n",&n);
	printf("Your ptr address : %d\n\n",ptr);
	printf("Your n address in hexadecimal : %p\n",&n);
	printf("Your ptr address in hexadecimal: %p\n\n",ptr);
	printf("Your n address in hexadecimal : %x\n",&n);
	printf("Your ptr address in hexadecimal: %x\n\n",ptr);
	n=9;
	printf("Your n address in hexadecimal : %x\n",&n);
	printf("Your ptr address in hexadecimal: %x\n\n",ptr);
	pre=&r;
	printf("Your r address in hexadecimal : %x\n",&r);
	printf("Your pre address in hexadecimal: %x\n\n",pre);
	
	
	
	
}