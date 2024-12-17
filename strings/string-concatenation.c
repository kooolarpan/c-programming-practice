#include <stdio.h>
#include <string.h>
int main() {
    char location[50] = "Chitwan";
    char college[] = " College of Technology";
    strcat(location, college);
    printf("College Name: %s", location);
    return 0;
}