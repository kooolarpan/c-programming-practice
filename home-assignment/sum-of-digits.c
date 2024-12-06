#include <stdio.h>
int main() {
    int number, remainder, sum=0;
    printf("Enter a double digit number: ");
    scanf("%d", &number);
    while (number > 0) {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum: %d", sum);
    return 0;
}