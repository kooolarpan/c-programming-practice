// WAP to print the factorial of a given number.

#include <stdio.h>
int main() {
    int num, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }
    printf("The factorial of %d is %d", num, factorial);
    return 0;
}