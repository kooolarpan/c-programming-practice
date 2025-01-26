// Passing 1-D Array to a function

#include <stdio.h>
void sum(int array[]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + array[i];
    }
    printf("Sum: %d", sum);
}

int main() {
    int array[5] = {1, 2, 3, 6, 4};
    sum(array);
    return 0;
}