// WAP to add the sum of odd elements of a given matrix.
/* if (array[i][j] % 2 == 1) {
    sum = sum + array[i][j]
} */

#include <stdio.h>
int main() {
    int myArray[3][3], sumOfoddElements;
    printf("Enter 3x3 Matrix: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &myArray[i][j]);
            if (myArray[i][j] % 2 == 1) {
                sumOfoddElements = sumOfoddElements + myArray[i][j];
            }
        }
    }

    printf("\nGiven Matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", myArray[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of odd elements: %d", sumOfoddElements);

    return 0;
}