#include<stdio.h>
#include<stdlib.h>

void main(){

int n, sum=0,r,temp;
printf("Enter a number:");
scanf("%d",&n);
temp=n;

while(temp!=0){

r=temp%10;
sum=sum+(r*r*r);
temp=temp/10;

}

if(sum==n){

printf("This is an armstrong number");

}

else{

printf("This is not a armstrong number");
}

}
