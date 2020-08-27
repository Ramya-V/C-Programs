 #include<stdio.h>
 #include<math.h>

void main(){
    int limit, num[100], findNumber,i,j, middleElement,temp;
    
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

    //Sorting
    for(i=0; i<=limit; i++){
        for(j=i+1; j<limit; j++){
            if(num[i] > num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    printf("The sorted list to search for element: ");
    for(i=0; i<limit; i++){
    printf("%d ", num[i]);
    }

    //Position of middle number
    middleElement = round((limit+1)/2);

    //IF the middle element is the number searched for
    if(num[middleElement] == findNumber){
        printf("\n The Number is present at the position: %d", middleElement+1);
        return;
    }
    //IF  number searched for is greater than middle number
    else if(findNumber > num[middleElement]){
        for(i=middleElement+1; i<limit; i++){
            if(findNumber == num[i]){
                printf("\n The Number is present at the position: %d",  i+1);
                return;
            }
        }
    }
    //IF  number searched for is lesser than middle number
    else{
        for(i=middleElement-1; i<middleElement && i>=0; i--){
            if(findNumber == num[i]){
                printf("\n The Number is present at the position: %d",  i+1);
                return;
            } 
        }  
    }

    //If the Number is not in the Array
    printf("\n Number is Not Found");
}