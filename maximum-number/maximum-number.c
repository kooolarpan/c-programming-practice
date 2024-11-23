/* WAP that asks the user to input three different numbers
and print the maximum among them */

#include <stdio.h>
int main() {
    int firstNumber, secondNumber, thirdNumber;
    printf("Enter any three numbers: ");
    scanf("%d%d%d", &firstNumber, &secondNumber, &thirdNumber);
    if (firstNumber > secondNumber && firstNumber > thirdNumber) {
        printf("%d is largest", firstNumber);
    } else if (secondNumber > firstNumber && secondNumber > thirdNumber) {
        printf("%d is largest", secondNumber);
    } else {
        printf("%d is largest", thirdNumber);
    }
    return 0;
}