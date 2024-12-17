// WAP to convert the given string to lowercase and uppercase

#include <stdio.h>
#include <string.h>
int main() {
    char string[] = "Chitwan College of Technology";
    printf("Lowercase string: %s\n", strlwr(string));
    printf("Uppercase string: %s", strupr(string));
    return 0;
}