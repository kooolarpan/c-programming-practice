// WAP to print even numbers from 200 to 500.
#include <stdio.h>
int main() {
    for (int i = 200; i <= 500; i++) {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }
    }

    return 0;
}
