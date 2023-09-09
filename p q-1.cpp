#include<stdio.h>
main()
{
	char ch;
	printf("enter the value of character");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("given value is capital alphabet.");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("given value is amall alphabet.");
	}
	else if(ch>='0'&&ch<='9')
	{ 
	   printf("given value is digit.");
	}
	else
	{ 
	   printf("given value is special character");
	}
}
