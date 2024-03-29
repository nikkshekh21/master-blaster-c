#include<stdio.h>
#define p printf
#define s scanf

int calsi(int n,int f,int s);
int main()
{
	int n,f,se;
	int ans=0;
	repit:
	p("Press the 1 for +\n");
	p("Press the 2 for -\n");
	p("Press the 3 for *\n");
    p("Press the 4 for /\n");
    p("Press the 5 for %%\n");
    p("Press the 0 for the exit\n");
    
    p("Enter your choice: ");
    s("%d",&n);
    
    switch(n)
    {
    	case 1:
    		p("Enter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("Addition of %d and %d ans:%d\n",f,se,ans);
    			if(n==0)
    				{
    					break;
					}
    		goto repit;
    		break;
    	case 2:
    		p("Enter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("Divition of %d and %d ans: %d\n",f,se,ans);
    			if(n==0)
    				{
    					break;
					}
    		goto repit;
    		break;
    	case 3:
    		p("Enter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("Subtraction of %d and %d ans: %d\n",f,se,ans);
    			if(n==0)
    				{
    					break;
					}
    		goto repit;
    		break;
    	case 4:
    		p("Enter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("multiplication of %d and %d ans: %d\n",f,se,ans);
    			if(n==0)
    				{
    					break;
					}
    			goto repit;
    		break;
    	case 5:
    		p("Enter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("modues of %d and %d ans: %d \n",f,se,ans);
    			if(n==0)
    				{
    					break;
					}
    		break;
    		default:
    			{
    				p("---:please try again:---\n\n");
    				goto repit;
    				if(n==0)
    				{
    					break;
					}
				}			  			
	}
}
int calsi(int n,int f,int se)
{
	if(n==1)
	{
		return f+se;
	}
	else if(n==2)
	{
		return f-se;
	}
	else if(n==3)
	{
		return f*se;
	}
	else if(n==4)
	{ 
		if(se==0||f==0)
		{
			p("You can not divided by o please try again\n");
		}
		return f/se;
	}
	else if(n==5)
	{
		return f%se;
	}
	
}


