#include<stdio.h>
#include<string.h>
main()
{
	char mail[30],pas[20],rmail[30],rpas[20];
	printf("Enter your email : ");
	gets(mail);
	printf("your email: ");
	puts(mail);
	
	printf("\nEnetr your password : ");
	gets(pas);
	printf("your password :");
	puts(pas);
	puts("....Your login is successful....");
	printf("\n\n--: check your email and password :--\n");

	printf("\nEnter your email : ");
	gets(rmail);
	printf("your email: ");
	puts(rmail);
	printf("\nEnter your password: ");

	gets(rpas);
	printf("your password :");
	
	
	puts(rpas);
	int cmp=strcmp(mail,rmail);
	int mp=strcmp(pas,rpas);
	if(cmp==0 && mp==0)
	{
		puts("Login successful...");
	}
	else
	{
		puts("Login Failed. Invalid Credentials...");
	}
	
}
