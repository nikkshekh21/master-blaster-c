#include<stdio.h>
#define p printf
#define s scanf
main()

{
	int con;
	p("press 1 for English\n");
	p("press 2 for Hindi\n");
	p("press 3 for Gujarati\n");
	p("enter your choice: ");
	s("%d",&con);
	switch(con)
	{
	
	 
	    case 1:
			p("press 1 for internet recharge\n");
			p("press 1 for internet recharge\n");
			p("press 1 for internet recharge\n\n");
			 
		p("enter your choice: ");
		s("%d",&con);
		switch (con)
		{
			case 1:
				p("you have successfully done internet recharge");
				break;
			case 2:
				p("you have successfully done top-up recharge");
				break;
			case 3:
				p("you have successfully done special recharge");
				break;
		}
		break;
	case 2:
		p("internet recharge ke liye 1 dabaiye\n");
		p("top-up recharge ke liye 1 dabaiye\n");
		p("special recharge ke liye 1 dabaiye\n\n");
		p("enter your chice: ");
		s("%d",&con);
		switch(con)
		{
			
			case 1:
				p("aapne safaltapurvak internet recharge kar liya he.");
				break;
			case 2:
				p("aapne safaltapurvak top-up recharge kar liya he.");
				break;
			case 3:
				p("aapne safaltapurvak special recharge kar liya he.");
				break;
		}
		break;
	case 3:
		p("internet recharge mate 1 dabavo\n");
		p("top-up recharge mate 2 dabavo\n");
		p("special recharge mate 3 dabavo\n\n");
		p("enter your chice: ");
		s("%d",&con);
		switch(con)
		{
			case 1:
				p("tame safaltapurvak internet recharge karyu chhe.");
				break;
			case 2:
				p("tame safaltapurvak top-up recharge karyu chhe.");
				break;
			case 3:
				p("tame safaltapurvak special recharge karyu chhe.");
				break; 
				
		
	    }
	    	default :
				p("fari prayaas karo");
		}
		
		
		
		
	}
	
	

