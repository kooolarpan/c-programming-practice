/* WAP to compute the sum of given numbers of squares.
    For example: if 4 is input, then the program will print 30,
    which is equal to 1^2 + 2^2 + 3^2 + 4^2
 */

#include <stdio.h>
int main() {
    int inputNumber;
    long double sum = 0;
    printf("Enter a number: ");
    scanf("%d", &inputNumber);
    for (int i = 1; i <= inputNumber; i++) {
        sum += i * i;
    }
    printf("The sum is: %.0Lf\n", sum);
    return 0;
}