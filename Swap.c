#include<stdio.h>
#include<stdlib.h>

void main()
{

	int a,b,temp;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping, a value is %d\n",a);
	printf("After swapping, b value is %d",b);
}
