// WAP to find the sum of diagonal elements of a given 3x3 matrix
#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Enter elements for 3x3 matrix: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Given 3x3 matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of the diagonal element of matrix is %d", sum);
    return 0;
}