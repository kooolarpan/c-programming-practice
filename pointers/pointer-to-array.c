// pointer to an array

#include <stdio.h>

int main() {
    int a[5];
    int *p;
    p = a;
    printf("Enter 5 Numbers: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", p + i);
    }

    printf("Displaying the elements of array: \n");
    for (int i = 0; i < 5; i++) {
        printf("%d\t", *(p + i));
    }
    return 0;
}