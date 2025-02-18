#include <stdio.h>
int main() {
    char name[] = "Arpan Kumar Pariyar";
    printf("%s\n", name);
    printf("%s\n", name + 2);

    char collegeName[] = "Chitwan College of Technology";
    char *pointer;
    pointer = collegeName;
    printf("%s", pointer);
    return 0;
}