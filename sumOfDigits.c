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
	
	printf("The sum of digits is : %d",sum);
	
}
