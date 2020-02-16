#include<stdio.h>
#include<stdlib.h>

void main()
{

	int n;
	printf("Enter the year: ");
	scanf("%d",&n);
	
  	if (n%4==0) 
	{
		if(n%100==0)
		{
			if(n%400==0)
			{
        			printf("It is a leap year");
			}
			else
			{
				printf("It is not a leap year");
			}
        	}
		else 
		{
			printf("It is not a leap year");
  		}
	}
        else 
	{
		printf("It is not a leap year");
  	}

}
