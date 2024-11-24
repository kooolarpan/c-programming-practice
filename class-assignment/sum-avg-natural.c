// WAP to find the sum and average of first N natural numbers.
#include <stdio.h>
int main() {
    int NaturalNumber, sum;
    printf("Enter a 'n' number: ");
    scanf("%d", &NaturalNumber);
    for (int i = 1; i <= NaturalNumber; i++) {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);
    float avg;
    avg = sum / NaturalNumber;
    printf("The average is %.2f", avg);
    return 0;
}