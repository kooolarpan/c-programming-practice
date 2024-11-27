// WAP to swap two numbers

#include <stdio.h>
int main() {
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("%d %d", a, b);
    return 0;
}