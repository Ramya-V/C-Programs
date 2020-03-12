#include<stdio.h>
#include<stdlib.h>

void main()
{

int n,i,j,k;
printf("Enter the number:");
scanf("%d",&n);

for(i=1;i<=n;i++){
for(j=i;j<n;j++){
	printf(" ");
	}
for(k=1;k<=i;k++){
	printf("*");
	}printf("\n");	 
}
}
