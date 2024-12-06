// WAP that asks user to input 5 numbers and find the maxium and minimum among them
#include <stdio.h>
int main() {
    int numbers[5], maximum = 0, min = numbers[0];
    printf("Enter any 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
        if (maximum < numbers[i]) {
            maximum = numbers[i];
        }
        if (min > numbers[i]) {
            min = numbers[i];
        }
    }
    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d", min);

    return 0;
}