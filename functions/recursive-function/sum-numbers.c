// WAP to print the numbers from 1 to 10 using recursive function

#include <stdio.h>
int sumNumbers(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n + sumNumbers(n - 1);
    }
}
int main() {
    int sum = sumNumbers(5);
    printf("Sum: %d", sum);
    return 0;
}