// program to add the matrix
#include<stdio.h>
void main(){
    int matrixOneRow,matrixOneCol, matrixTwoRow, matrixTwoCol, i, j, z;

    // Rows and Cols of Matrix One
    printf("Enter the number of rows in Matrix One: ");
    scanf("%d", &matrixOneRow);
    printf("Enter the number of cols in Matrix One: ");
    scanf("%d", &matrixOneCol);

    // Rows and Cols of Matrix Two
    printf("Enter the number of rows in Matrix Two: ");
    scanf("%d", &matrixTwoRow);
    printf("Enter the number of cols in Matrix Two: ");
    scanf("%d", &matrixTwoCol);

    if(matrixOneCol != matrixTwoRow){
        printf("Multiplication is not possible");
        return;
    }

    int matrixOne[matrixOneRow][matrixOneCol], matrixTwo[matrixTwoRow][matrixTwoCol], result[matrixOneRow][matrixTwoCol];

    // Matrix One
    printf("Enter the numbers in the matrixOne: ");
    for(i=0; i<matrixOneRow; i++){
        for(j=0; j<matrixOneCol; j++){
            scanf("%d", &matrixOne[i][j]);
        }
        printf("\n");
    }

    // Matrix Two
    printf("Enter the numbers in the matrixTwo: ");
    for(i=0; i<matrixTwoRow; i++){
        for(j=0; j<matrixTwoCol; j++){
            scanf("%d", &matrixTwo[i][j]);
        }
        printf("\n");
    }

    // Multiplication
    for(i=0; i<matrixOneRow; i++){
        for(j=0; j<matrixTwoCol; j++){
            result[i][j]=0;
            for(z=0; z<matrixOneCol; z++){
            result[i][j] += (matrixOne[i][z]*matrixTwo[z][j]);
            }
        }
    }

    // Multiplication Result is Printed
    printf("The Multipied Result is:");
    for(i=0; i<matrixOneRow; i++){
        for(j=0; j<matrixTwoCol; j++){
            printf(" %d ", result[i][j]);
        }
        printf("\n");
    }

}