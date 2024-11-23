// WAP to add two numbers

#include <stdio.h>
int main() {
    int a, b, sum;  // declaration of variables
    printf("Enter any two numbers: ");
    scanf("%d%d", &a, &b);                         // taking input from the user
    sum = a + b;                                   // adding a and b
    printf("The sum of two numbers is: %d", sum);  // printing the sum
    return 0;
}
