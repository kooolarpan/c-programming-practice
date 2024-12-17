#include <stdio.h>
#include <string.h>
int main() {
    char firstString[] = "Arpan", secondString[] = "Arpan";
    int value = strcmp(firstString, secondString);
    if (value > 0) {
        printf("%s is greater than %s", firstString, secondString);
    } else if (value > 0) {
        printf("%s is greater than %s", secondString, firstString);
    } else {
        printf("%s is same as %s", firstString, secondString);
    }

    return 0;
}