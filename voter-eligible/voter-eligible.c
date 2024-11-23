/* WAP that asks the user to input their age
and print if they are eligible to vote or not */

#include <stdio.h>
int main() {
    int age;
    printf("Welcome to Voting Center\n");
    printf("Please enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Congrats! You are eligible to vote.");
    } else {
        printf("Sorry! You are not eligible to vote.");
    }
    printf("\nThanks for visiting Voting Center");
    return 0;
}