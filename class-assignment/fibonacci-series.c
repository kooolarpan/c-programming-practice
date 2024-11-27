// WAP to print the fibonacci series up to 10th term
// 1, 1, 2, 3, 5, 8, 13, 21

#include <stdio.h>
int main() {
    int a = 0, b = 1, sum;
    printf("%d\t", b);
    for (int i = 1; i <= 9; i++) {
        sum = a + b;
        a = b;
        b = sum;
        printf("%d\t", sum);
    }

    return 0;
}