// WAP to find the value of x^y without using POW function

/* 2^2 = 2 x 2 = 4
3^3 = 3 x 3 x 3 = 27
3^4 = 3 x 3 x 3 x 3 = 81 */

#include <stdio.h>
int main() {
    int baseNumber, powerNumber;
    printf("Enter a base number: ");
    scanf("%d", &baseNumber);
    printf("Enter a power number: ");
    scanf("%d", &powerNumber);
    long double squaredNumber = 1.0;
    for (int i = 1; i <= powerNumber; i++) {
        squaredNumber = squaredNumber * baseNumber;
    }
    printf("%.0Lf\t", squaredNumber);
    return 0;
}