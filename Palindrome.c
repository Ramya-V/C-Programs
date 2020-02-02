#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{

	int rev=0,r,temp,n;
	printf("Enter the number:");
	scanf("%d",&n);
	temp=n;

	while(temp!=0)
	{
		r=temp%10;
		rev=r+(rev*10);
		temp=temp/10;
	}
	
	if(n==rev)
	{
		printf("It is a palindrome");
	}
	else
	{
		printf("It is not a palindrome");
	}
}
