#include<stdio.h>
main()
{
	char day;
	printf("\n enter value of day=");
    scanf("%c",&day);
    switch(day)
    {
    	case 'M':
    		 printf("monday");
    		 break;
    	case 'T':
		     printf("tuesday");
			 break;
		case 'W':
		     printf("wednesday");
			 break;
		case 't':
		     printf("thursday");
			 break;
		case 'F':
		     printf("friday");
			 break;
		case 'S':
		     printf("saturday");
			 break;
		case 's':
		     printf("sunday");
			 break;
		defult:
		   printf("in valid input");
		   break;	 	 	 	 	 
    }
}
