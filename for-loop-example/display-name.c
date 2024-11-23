/* WAP that asks the user to input a number and
display "CCT College" the number of times entered by the user. */

#include <stdio.h>
int main() {
    int loopNumber;
    printf("Enter a number to loop: ");
    scanf("%d", &loopNumber);
    for (int i = 1; i <= loopNumber; i++) {
        printf("CCT College\t");
    }
    return 0;
}