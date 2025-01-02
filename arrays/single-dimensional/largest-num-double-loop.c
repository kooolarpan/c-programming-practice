// WAP to find largest number using double loop

#include <stdio.h>
int main() {
    int a[5], i, j, temp = 0;
    for (i = 0; i < 5; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                continue;
            } else {
                a[i] = a[j];
            }
        }
        printf("%d", a[i]);
        break;
    }
    return 0;
}