// WAP to print the sum of first 5 even numbers.
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            sum = sum + i;
        }
    }
    printf("The sum of 5 even numbers is %d", sum);
    return 0;
}