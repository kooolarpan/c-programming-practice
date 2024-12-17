#include <stdio.h>
#include <string.h>
int main() {
    char name[] = "Arpan";
    printf("Name: %s\n", name);
    strrev(name);
    printf("Reversed Name: %s", name);
    return 0;
}