/* WAP to swap the value of two numbers using funcion by two methods
a. pass by value
b. pass by reference */

#include <stdio.h>
void passByValue(int firstNumber, int secondNumber) {
    int temp;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;
    printf("\nAfter Swapping\n");
    printf("First Number: %d Second Number: %d\n", firstNumber, secondNumber);
}
void passByReference(int *firstNumber, int *secondNumber) {
    int temp;
    temp = *firstNumber;
    *firstNumber = *secondNumber;
    *secondNumber = temp;
    printf("\nAfter Swapping\n");
    printf("First Number: %d Second Number: %d\n", *firstNumber, *secondNumber);
}

int main() {
    int firstNumber, secondNumber;
    char selection;
    printf("Enter any two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    printf("How do you want to swap the numbers ?\na. pass by value b. pass by reference: ");
    scanf(" %c", &selection);
    switch (selection) {
        case 'a':
        case 'A':
            printf("Before Swapping - Pass By Value\n");
            printf("First Number: %d Second Number: %d\n", firstNumber, secondNumber);
            passByValue(firstNumber, secondNumber);
            break;
        case 'b':
        case 'B':
            printf("\nBefore Swapping - Pass By Reference\n");
            printf("First Number: %d Second Number: %d\n", firstNumber, secondNumber);
            passByReference(&firstNumber, &secondNumber);
            break;
        default:
            break;
    }
    return 0;
}