/* WAP that asks the user to input their obtained percentage in exam
and display their division based on the following table. */

/* Percentage                                      -        Division
   greater than or equal to 80                              Distinction
   less than 80 and greater than or equal to 60             First Division
   less than 60 and greater than or equal to 40             Second Division
   Less than 40                                             Fail
 */

#include <stdio.h>
int main() {
    int obtainedPercentage;
    printf("=== Welcome to Exam Result Portal ===\n");
    printf("Enter your obtained percentage: ");
    scanf("%d", &obtainedPercentage);
    if (obtainedPercentage <= 100) {
        if (obtainedPercentage >= 80) {
            printf("Congrats! You have secured distinction");
        } else if (obtainedPercentage < 80 && obtainedPercentage >= 60) {
            printf("Congrats! You have secured first division");
        } else if (obtainedPercentage < 60 && obtainedPercentage >= 40) {
            printf("Congrats! You have secured second division");
        } else {
            printf("Sorry, You have failed");
        }
    } else {
        printf("Sorry! The provided percentage is greater than 100");
    }
    printf("\n=== Thanks for visiting Exam Result Portal ===");
    return 0;
}