#include<stdio.h>
#include<stdlib.h>

void main()
{

	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	
	if(n>=0)
	{
		printf("It is a positive number");
	}
	else
	{
		printf("It is a negative number");
	}
}
