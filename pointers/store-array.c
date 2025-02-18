// Sum of 5 numbers stored in an array using pointer and DMA

#include <stdio.h>
#include <stdlib.h>
int main() {
    int *p1, *p2;

    // using pointer
    /*  int a[5];
     p = a; */

    // using DMA
    p1 = (int *)malloc(5 * sizeof(int));

    // using callcoc
    p2 = (int *)calloc(5, sizeof(int));

    // using realloc
    p1 = realloc(p1, 10 * sizeof(int));

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p1 + i);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + *(p1 + i);
    }
    printf("Sum: %d", sum);

    free(p1);
    free(p2);
    return 0;
}