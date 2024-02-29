#include<stdio.h>
#define p printf
#define s scanf
main()

{
	char n;
	int a,b;
	restart:
	p("\n\npress + for addition\n");
	p("press * for multiplication\n");
	p("press - for subtraction\n");
	p("press %% for modulus\n");
	p("press / for division\n");
	p("enter your choice: ");
	s("%c",&n);
	p("enter your first value: ");
	s("%d",&a);
	p("enter your second value: ");
	s("%d",&b);
	switch(n)
	{
			case '+':
				p("your value %d and %d addition ans: %d",a,b,a+b);
				break;
			case '*':
			    p("your value %d and %d multiplication ans: %d",a,b,a*b);
				break;
			case '-':
				p("your value %d and %d subtraction ans: %d",a,b,a-b);
				break;
			case '%%':
				p("your value %d and %d modulass ans: %d",a,b,a%b);
				break;
			case '/':
				p("your value %d and %d division ans: %d",a,b,a/b);
				break;
	    	default:
				p("fari prayaas karo");
				goto restart ;
		}

}
