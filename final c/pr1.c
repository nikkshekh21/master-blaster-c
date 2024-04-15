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
	 
	  else if(ch=='I'||ch=='O'||ch=='U'||ch=='E'||ch=='A')
	  {
	  	printf("THIS CHARACTER IS VOWEL!!");
	  }
	  else if(ch>=48&&ch<=57||ch>=33&&ch<=47||ch>=58&&ch<=64||ch==32)
	  {
	  	printf("THIS CHARACTER IS SPECIAL CHARACTER!!");
	  }
	  else
	  {
	  	printf("THIS CHARACTER IS CONSONANTS!!!!");
	  }
}