// WAP to print the numbers from 100 & 200 that is divisble by 5 & 7.
#include <stdio.h>
int main() {
    for (int i = 100; i <= 200; i++) {
        if (i % 5 == 0 && i % 7 == 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}