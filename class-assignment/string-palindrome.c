// WAP to check whether a given string is palindrome or not

#include <stdio.h>
#include <string.h>
int main() {
    char string[20];
    char originalString[20];
    printf("Enter a string to check: ");
    gets(string);
    strcpy(originalString, string);
    strrev(string);
    if (strcmp(string, originalString) == 0) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }
    return 0;
}