/* Write a program to find out whether the nth term of the Fibonacci series is a
prime number or not. Read the value of n from the user and display the result
in the main function. Use separate user-defined function to generate the nth
Fibonacci term and to check whether that number is prime or not. */

// 0 1 1 2 3 5 8 13 21 34

#include <stdio.h>
int getFibonacci(int number) {
    if (number == 0) {
        return 0;
    } else if (number == 1) {
        return 1;
    }

    int firstTerm = 0, secondTerm = 1, nextTerm = 0;
    printf("%d\t", firstTerm);
    printf("%d\t", secondTerm);
    for (int i = 2; i <= number; i++) {
        nextTerm = firstTerm + secondTerm;
        printf("%d\t", nextTerm);
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    return nextTerm;
}
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int term, nthFibonacciNumber;
    printf("Enter a nth term value: ");
    scanf("%d", &term);
    nthFibonacciNumber = getFibonacci(term);
    printf("\n%dth Fibonacci term is: %d\n", term, nthFibonacciNumber);
    if (isPrime(nthFibonacciNumber)) {
        printf("%d is prime number", nthFibonacciNumber);
    } else {
        printf("%d is not a prime number", nthFibonacciNumber);
    }
    return 0;
}