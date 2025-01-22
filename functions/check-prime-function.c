// WAP to check whether the given number is a prime number or not using function

/* A prime number is a number that can only be divided by itself
and 1 without remainders.
13 => can be divded by 13 and 1 (Prime)
4 => can be divided by 4, 2 and 1 (Not Prime) */

#include <stdio.h>

// Function to check if a number is prime
int isPrimeNumber(int number) {
    if (number <= 1) {
        // number less than 1 or equal to 1 is not prime.
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            // Not a prime number
            return 0;
        }
    }
    // prime Number
    return 1;
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime or not
    if (isPrimeNumber(number)) {
        printf("%d is a prime number.", number);
    } else {
        printf("%d is not a prime number.", number);
    }
    return 0;
}