// WAP to display the following pattern:

// *****
// ****
// ***
// **
// *

#include <stdio.h>
int main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
}