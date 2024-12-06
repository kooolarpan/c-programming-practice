// WAP to ask users to input 5 numbers and compute their sum and average using
// array

#include <stdio.h>
int main() {
    int numbers[5];
    float sum = 0.0, average = 0.0;
    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        sum = sum + numbers[i];
        average = sum / 5.0;
    }
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f", average);
    return 0;
}