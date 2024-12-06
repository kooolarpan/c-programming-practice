#include <stdio.h>
int main() {
    int roll[30];
    for (int i = 0; i < 30; i++) {
        /* code */
        printf("Enter your roll numbers: ");
        scanf("%d", &roll[i]);
    }
    printf("The roll numbers are:\n");
    for (int i = 0; i < 30; i++) {
        /* code */
        printf("%d\n", roll[i]);
    }
    return 0;
}