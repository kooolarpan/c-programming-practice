// WAP to input name of the user

#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Your Name: %s", name);
    return 0;
}