#include<stdio.h>
void magic(int n);
void main()
{ 
    int n;
	printf("Enter your numbar: ");
	scanf("%d",&n);
	magic(n);
	
}
void magic(int n)
{ 
    int rem,sum=0,multi=1,value;
    value=n;
	while(value!=0)
	{
		rem=value%10;
		sum+=rem;
		multi*=rem;
		value=value/10;
	}
	
     if(sum==multi)
	 {
			printf("\n!! %d is the magic number!!",n);
     }
      else 
         
     {
     	printf("\n!! %d is not magic number!!",n);
	 }
}