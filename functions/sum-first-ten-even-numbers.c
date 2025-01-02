// WAP to compute the sum of first 10 even numbers using function
#include <stdio.h>
int sumOfFirst10EvenNumbers() {
    int sum = 0;
    for (int i = 0; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            sum = sum + i;
        }
    }
    return sum;
}

int main() {
    int sum;
    sum = sumOfFirst10EvenNumbers();
    printf("Sum of first even numbers: %d", sum);
    return 0;
}