#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){

int n, sum=0,r,temp,fact,i;
printf("Enter a number:");
scanf("%d",&n);
temp=n;

while(temp!=0){

r=temp%10;
fact = 1;
for(i=1;i<=r;i++)
{
fact=fact*i;
}
sum=sum+fact;
temp=temp/10;

}

if(n==sum){

printf("This is a strong number");

}

else{

printf("This is not a strong number");
}

}
