// WAP to add two matrices of size 2x2
#include <stdio.h>
int main() {
    int firstArray[2][2] = {{3, 5}, {2, 8}};
    int secondArray[2][2] = {{1, 2}, {4, 3}};
    int thirdArray[2][2];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            thirdArray[i][j] = firstArray[i][j] + secondArray[i][j];
            printf("%d\t", thirdArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}