// WAP to find the factorial of a number

#include <stdio.h>
int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * findFactorial(n - 1);
    }
}
int main() {
    int sum = findFactorial(5);
    printf("Sum: %d", sum);
    return 0;
}