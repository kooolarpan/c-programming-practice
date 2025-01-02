#include <stdio.h>

// Function with Args + Return
int addTwoNumbersWithArgs(int firstNumber, int secondNumber) {  
    return firstNumber + secondNumber;
}

// Function with No Args + No Return
void addTwoNumbersWithNoArgsNoReturn() {
    int firstNumber, secondNumber;
    printf("\nFunction with No Args + No Return");
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    printf("Sum of two numbers %d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
}

// Function with No Args + Return
int addTwoNumbersWithReturn(int firstNumber, int secondNumber) {
    return firstNumber + secondNumber;
}

// Function with Args + No Return
void addTwoNumbersWithArgsNoReturn(int firstNumber, int secondNumber) {
    printf("Sum of two numbers %d + %d = %d", firstNumber, secondNumber, firstNumber + secondNumber);
}

int main() {
    int firstNumber, secondNumber, sum;

    // Function with Args + Return
    printf("\nFunction with Args + Return");
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    sum = addTwoNumbersWithArgs(firstNumber, secondNumber);  
    printf("Sum of two numbers %d + %d = %d", firstNumber, secondNumber, sum);

    // Function with No Args + No Return
    addTwoNumbersWithNoArgsNoReturn();

    // Function with No Args + Return
    printf("\nFunction with No Args + Return");
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    sum = addTwoNumbersWithReturn(firstNumber, secondNumber);
    printf("Sum of two numbers %d + %d = %d", firstNumber, secondNumber, sum);

    // Function with Args + No Return
    printf("\nFunction with Args + No Return");
    printf("\nEnter any two numbers: ");
    scanf("%d%d", &firstNumber, &secondNumber);
    addTwoNumbersWithArgsNoReturn(firstNumber, secondNumber);

    return 0;
}

