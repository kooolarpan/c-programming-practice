// Function returning address as pointer

#include <stdio.h>
int* returnPointer() {
    static int number = 5;
    return &number;
}
int main() {
    int* functionNumber = returnPointer();
    printf("%d", *functionNumber);
    return 0;
}