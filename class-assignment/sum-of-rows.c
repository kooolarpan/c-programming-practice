// WAP to sum the elements of each row

#include <stdio.h>
int main() {
    int myArray[3][3], sum;
    printf("Enter 3x3 matrix: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &myArray[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 3; j++) {
            sum = sum + myArray[i][j];
        }
        printf("%d\n", sum);
    }

    return 0;
}
