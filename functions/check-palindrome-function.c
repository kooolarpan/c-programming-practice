// WAP to check whether the given number is a palindrome or not using function

// 12321 = Palindrome
// 12632 = Not Palindrome

#include <stdio.h>
int isPalindrome(int number) {
    int remainder, reversed = 0;
    int originalNumber = number;  // Storing number in originalNumber
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number = number / 10;
    }

    if (originalNumber == reversed) {
        return 1;  // Palindrome
    } else {
        return 0;  // Not Palindrome
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("The number %d is palindrome.", number);
    } else {
        printf("The number %d is not palindrome.", number);
    }
    return 0;
}
