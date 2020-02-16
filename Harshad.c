#include<stdio.h>
#include<stdlib.h>

void main()
{
	int n,sum=0,r,temp;
	printf("Enter the number: ");
	scanf("%d",&n);
	temp=n;
	
	while(temp!=0)
	{
		r=temp%10;
		sum=sum+r;
		temp=temp/10;
	}

	if(n%sum==0)
	{
		printf("It is a Harshad number");
	}
	else
	{
		printf("It is not a Harshad number");
	}
}
