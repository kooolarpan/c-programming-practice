#include <stdio.h>
int main() {
    int a;
    printf("Enter a positive number: ");
    scanf("%d", &a);
    if (a < 10) {
        printf("Apple");
    } else if (a >= 10 && a < 20) {
        printf("Ball");
    } else if (a >= 20 && a < 30) {
        printf("Cat");
    } else {
        printf("Dog");
    }
    return 0;
}