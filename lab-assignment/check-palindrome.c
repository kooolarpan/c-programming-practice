// WAP to check whether the given number is palindrome or not

#include <stdio.h>
int main() {
    int number, remainder, original, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    original = number;

    // 12321 = Palindrome
    // 12632 = Not Palindrome

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    if (original == reversed) {
        printf("The number %d is palindrome", original);
    } else {
        printf("The number %d is not palindrome", original);
    }
    return 0;
}