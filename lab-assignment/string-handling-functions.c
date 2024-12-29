/* Demonstrate program examples using these string handling functions.
a. strlen() b.strcpy() c. strcat() d. strcmp() e. strlwr() f.strupr  g. strrev()
*/

#include <stdio.h>
#include <string.h>
int main() {
    char firstString[50] = "Chitwan College of Technology ";
    char secondString[50];
    printf("The length of the string is: %d", strlen(firstString));

    strcpy(secondString, firstString);
    printf("\nThe value of secondString is: %s", secondString);

    char thirdString[10] = "Bharatpur";
    strcat(secondString, thirdString);
    printf("\nConcatenation: %s", secondString);

    int compare_value = strcmp(firstString, thirdString);
    if (compare_value > 0) {
        printf("\n%s is greater than %s", firstString, thirdString);
    } else if (compare_value > 0) {
        printf("\n%s is greater than %s", thirdString, firstString);
    } else {
        printf("\n%s is same as %s", firstString, thirdString);
    }

    printf("\nLowercase: %s", strlwr(firstString));
    printf("\nUppercase: %s", strupr(firstString));
    printf("\nReverse: %s", strrev(firstString));
    return 0;
}