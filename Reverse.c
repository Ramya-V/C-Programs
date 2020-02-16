#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{

	char a[100] , n[100], ch;
	int i,j,count, k=0 , flag=1;
	printf("Enter the string:");
	scanf("%s",a);

	for(i=0;a[i]!='\0';i++)
	{
		count = i;
	}
	for(j=count;j>=0;j--)
	{
		ch = a[j];
		strncat(n , &ch , 1);
	}
	printf(" The Reversed string  is : %s",n);
	
}
