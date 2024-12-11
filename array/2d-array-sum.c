// WAP that asks user to input numbers in 2 x 3 array and sum them.

#include <stdio.h>
int main() {
    int numbersMatrix[2][3], sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &numbersMatrix[i][j]);
            sum = sum + numbersMatrix[i][j];
        }
    }
    printf("Sum: %d", sum);
    return 0;
}