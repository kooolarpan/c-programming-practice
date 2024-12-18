// WAP to find the length of a string without using strlen()

#include <stdio.h>
int main() {
    char string[50];
    printf("Enter a string: ");
    gets(string);
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    printf("The length of the string is: %d", i);
    return 0;
}