// WAP to find the sum of even elements of a given 2x3 matrix
#include <stdio.h>
int main() {
    int matrix[2][3];
    printf("Enter elements for 2x3 matrix: ");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Given 2x3 matrix: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] % 2 == 0) {
                sum = sum + matrix[i][j];
            }
        }
    }
    printf("Sum of the even element of matrix is %d", sum);
    return 0;
}