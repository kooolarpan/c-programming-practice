/* WAP that asks the user to input their roll number and
display it 10 times using whilte loop */

#include <stdio.h>
int main() {
    int rollNumber, i = 1;
    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    while (i <= 10) {
        printf("%d\t", rollNumber);
        i++;
    }
    return 0;
}