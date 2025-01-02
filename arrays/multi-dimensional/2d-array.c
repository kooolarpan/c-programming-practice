// 2D array compile time initialization

#include <stdio.h>
int main() {
    // 1st Method
    int numbers[2][2];
    numbers[0][0] = 2;
    numbers[0][1] = 4;
    numbers[1][0] = 5;
    numbers[1][1] = 6;

    printf("First Array: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", numbers[i][j]);
        }
        printf("\n");
    }
    // 2nd Method
    int number[2][3] = {{2, 4, 5}, {4, 5, 6}};

    printf("\nSecond Array: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", number[i][j]);
        }
        printf("\n");
    }

    return 0;
}