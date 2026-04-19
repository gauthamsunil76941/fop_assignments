#include <stdio.h>

void main() {
    int matrix[3][3], matrix2[3][3];
    int found = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < 3; i++) {
        int min = matrix[i][0];
        int col = 0;

        for(int j = 1; j < 3; j++) {
            if(matrix[i][j] < min) {
                min = matrix[i][j];
                col = j;
            }
        }

        int isSaddle = 1;
        for(int k = 0; k < 3; k++) {
            if(matrix[k][col] > min) {
                isSaddle = 0;
                break;
            }
        }

        if(isSaddle) {
            printf("Saddle point = %d\n", min);
            found = 1;
        }
    }

    if(!found) {
        printf("No saddle point found\n");
    }

    printf("Enter elements of 3x3 matrix2:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nSum of matrices:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

}