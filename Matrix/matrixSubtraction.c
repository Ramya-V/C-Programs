// program to add the matrix
#include<stdio.h>
void main(){
    int row, col, i, j;

    // Rows
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    // Columns
    printf("Enter the number of column: ");
    scanf("%d", &col);

    int matrixOne[row][col], matrixTwo[row][col], result[row][col];

    // Matrix One
    printf("Enter the numbers in the matrixOne: ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &matrixOne[i][j]);
        }
        printf("\n");
    }

    // Matrix Two
    printf("Enter the numbers in the matrixTwo: ");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            scanf("%d", &matrixTwo[i][j]);
        }
        printf("\n");
    }

    // Subtraction
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            result[i][j] = matrixOne[i][j] - matrixTwo[i][j];
        }
    }

    // Subtraction Result is Printed
    printf("The Subtracted Result is:");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

}