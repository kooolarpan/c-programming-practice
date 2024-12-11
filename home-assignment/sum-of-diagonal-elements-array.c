// WAP to add the sum of diagonal elements of a given matrix.
/* if(i==j){
    sum = sum + array[i][j]
} */

#include <stdio.h>
int main() {
    int myArray[3][3], sum;
    printf("Enter 3x3 Matrix: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &myArray[i][j]);
            if (i == j) {
                sum = sum + myArray[i][j];
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

    printf("\nSum of diagonal elements: %d", sum);

    return 0;
}