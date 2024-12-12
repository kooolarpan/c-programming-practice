// WAP to find the transpose of a given matrix

/*
1 [0][0] 2[0][1]
3 [1][0] 4[1][1]

1 [0][0] 3[0][1]
2 [1][0] 4[1][1]

*/

#include <stdio.h>
int main() {
    int myArray[2][2];
    printf("Enter 2x2 Matrix: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("\nGiven Matrix: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", myArray[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", myArray[j][i]);
        }
        printf("\n");
    }

    return 0;
}