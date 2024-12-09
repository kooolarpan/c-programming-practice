// WAP to swap numbers in array
#include <stdio.h>
int main() {
    int number[10], temp;
    printf("Enter any 5 numbers only: \n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }
    printf("\nNumbers in Ascending order: \n");
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (number[i] > number[j]) {
                temp = number[i];
                number[i] = number[j];
                number[j] = temp;
            }
        }
        printf("%d\t", number[i]);
    }
    return 0;
}