// WAP to find the sum of all elements of given 3 x 2 matrix using function

#include <stdio.h>
int findSumofArray(int array[3][2]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            sum = sum + array[i][j];
        }
    }
    return sum;
}
int main() {
    int array[3][2], count = 1;
    printf("Enter the elements for an array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Element - %d: ", count);
            scanf("%d", &array[i][j]);
            count++;
        }
    }
    int sum = findSumofArray(array);
    printf("Sum of the all elements is: %d", sum);
    return 0;
}