#include<stdio.h>
#define p printf
#define s scanf

int calsi(int n,int f,int s);
int main()
{
	int n,f,se;
	int ans=0;
	
	while(n=1)
	{
	
	p("\nPress the 1 for +\n");
	p("Press the 2 for -\n");
	p("Press the 3 for *\n");
    p("Press the 4 for /\n");
    p("Press the 5 for %%\n");
    p("Press the 0 for the exit\n");
    
    p("\n\n--:Enter your choice:= ");
    s("%d",&n);
    
    if(n==0)
    {
    	break;
	}
	else
	{
		switch(n)
    {
    	case 1:
    		p("\nEnter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("\nAddition of %d and %d ans:= %d\n",f,se,ans);
    		
    		break;
    	case 2:
    		p("\n\nEnter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("\nDivition of %d and %d ans:= %d\n",f,se,ans);
    		
    		break;
    	case 3:
    		p("\n\nEnter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("\nSubtraction of %d and %d ans:= %d\n",f,se,ans);
    	
    		break;
    	case 4:
    		p("\n\nEnter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("\nmultiplication of %d and %d ans:= %d\n",f,se,ans);
    		
    		break;
    	case 5:
    		p("\n\nEnter the first number: ");
    		s("%d",&f);
    		p("Enter the second number: ");
    		s("%d",&se);
    		ans = calsi(n, f, se);
    		p("\nmodues of %d and %d ans:= %d \n",f,se,ans);
    			
    		break;
    		default:
    			{
    				p("---:please try again:---\n\n");
    			
				}			  			
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
			p("\nYou can not divided by o please try again\n");
		}
		return f/se;
	}
	else if(n==5)
	{
		return f%se;
	}
	
}


