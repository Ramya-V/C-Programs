#include<stdio.h>
void main(){
    int limit, num[100], findNumber,i;
    
    //limit of Entry of Numbers 
    printf("Enter the Limit: ");
    scanf("%d", &limit);

    //Entry of Numbers
    printf("Enter the Numbers: ");
    for(i=0; i<limit; i++){
        scanf("%d", &num[i]);
    }

    //Number to find
    printf("Enter the Number to Find: ");
    scanf("%d", &findNumber);

    //Searching in Sequencial order - Linear Search
    for(i=0; i<limit; i++){
        //If the Number is Present
        if(num[i] == findNumber){
            printf("The Number is found at the position of : %d", i+1);
            return;
        }
    }

    //If the Number is not in the Array
    printf("Number is Not Found");
}
