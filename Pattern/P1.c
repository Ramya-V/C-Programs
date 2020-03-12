#include<stdio.h>
#include<stdlib.h>

void main()
{

	int n,i,j;
	printf("Enter the number:");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		for(j=i;j<=n;j++){
			printf("*");		
		}printf("\n");		
	}	
}
