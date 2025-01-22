// WAP to find the factorial of a given number using function
// Factorial -> 6! = 6 * 5 * 4 * 3 * 2 * 1 = 720

#include <stdio.h>
int getFactorial(int number) {
    int factorial = 1;
    for (int i = 1; i <= number; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int number, factorial;
    printf("Enter a number: ");
    scanf("%d", &number);
    factorial = getFactorial(number);
    printf("Factorial of %d is %d", number, factorial);
    return 0;
}