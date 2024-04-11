#include<stdio.h>
void main()
{
      int ch;
      printf("Enter your character: ");
      scanf("%c",&ch);
      if(ch=='i'||ch=='o'||ch=='u'||ch=='e'||ch=='a')
      {
      	printf("THIS CHARACTER IS VOWEL!!");
	  }
	 
	  else if(ch>='A'||ch<='Z'&&ch>='a'||ch<='z')
	  {
	  	printf("THIS CHARACTER IS CONSONANT!!");
	  }
	  else
	  {
	  	printf("special character!!");
	  }
}