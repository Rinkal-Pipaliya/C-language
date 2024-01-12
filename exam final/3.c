#include <stdio.h>

int main() {
    int matrix[3][3], i, j, sumDiagonal = 0, sumAntiDiagonal = 0;

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element at position [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        sumDiagonal += matrix[i][i];
    }

    for (i = 0, j = 2; i < 3; i++, j--) {
        sumAntiDiagonal += matrix[i][j];
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of diagonal elements: %d\n", sumDiagonal);
    printf("Sum of anti-diagonal elements: %d\n", sumAntiDiagonal);

    return 0;
}

