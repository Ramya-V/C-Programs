#include<stdio.h>
#include<stdlib.h>

void main()
{

int fact=1,n,i;

printf("Enter the number: ");
scanf("%d",&n);

for(i=1;i<=n;i++){
fact=fact*i;
}

printf("The Factorial is %d",fact);
}

