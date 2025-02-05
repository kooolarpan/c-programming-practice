// WAP to print the numbers from 1 to 10 using recursive function

#include <stdio.h>
int printNumbers(int n) {
    printf("%d\t", n);
    if (n == 10) {
        return 0;
    } else {
        printNumbers(n + 1);
    }
}
int main() {
    printNumbers(1);
    return 0;
}