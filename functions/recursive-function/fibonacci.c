// WAP to generate fibonacci series upto nth term using recursive function
// 0 1 1 2 3 5 8 13

#include <stdio.h>
int generateFibonacci(int i) {
    if (i <= 1) {
        return i;
    } else {
        return generateFibonacci(i - 1) + generateFibonacci(i - 2);
    }
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 0; i < number; i++) {
        int series = generateFibonacci(i);
        printf("%d\t", series);
    }
    return 0;
}