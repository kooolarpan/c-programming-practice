#include <stdio.h>
#include <string.h>
int main() {
    char name[] = "Arpan";
    char duplicateName[20];
    strcpy(duplicateName, name);
    printf("Name: %s\nDuplicate Name: %s\n", name, duplicateName);
    return 0;
}