/* WAP that asks the user to input a sentence and find how many times the
 letters 'a' and 'A' occurs in that sentence.  */

#include <stdio.h>
#include <string.h>
int main() {
    char string[100];
    printf("Enter a sentence: ");
    fgets(string, sizeof(string), stdin);
    int count = 0;
    int stringLength = strlen(string);
    for (int i = 0; i < stringLength; i++) {
        if (string[i] == 'a' ||
            string[i] == 'A') {  // Check for both lowercase and uppercase 'a'
            count++;
        }
    }
    printf("The letter 'a' and 'A' occurs %d times in the sentence.\n", count);
    return 0;
}
