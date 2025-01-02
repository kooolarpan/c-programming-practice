#include <stdio.h>
int main() {
    int number;
    printf("Enter a number to walk the robot: ");
    scanf("%d", &number);
    switch (number) {
        case 1:
            printf("Walk straight");
            break;

        case 2:
            printf("Turn right");
            break;

        case 3:
            printf("Turn left");
            break;

        default:
            printf("Stop");
            break;
    }
    return 0;
}