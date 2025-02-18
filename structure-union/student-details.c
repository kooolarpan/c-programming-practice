/*

Structure is a user defined data type where we can store different types of
primitive data types, derived data types

Syntax:
struct struct_name{
    data_type variable_name;
    };

*/

#include <stdio.h>
struct StudentDetails {
    int roll;
    char fullName[50];
    char address[30];
    float marks;
};
int main() {
    struct StudentDetails student[2];
    for (int i = 0; i < 2; i++) {
        printf("\nEnter full name, roll no, marks, address: \n");
        scanf("%s%d%f%s", student[i].fullName, &student[i].roll,
              &student[i].marks, student[i].address);
    }
    printf("\nDisplaying the records: \n");
    for (int i = 0; i < 2; i++) {
        printf("Full Name: %s\t", student[i].fullName);
        printf("Roll No: %d\t", student[i].roll);
        printf("Marks: %.2f\t", student[i].marks);
        printf("Address: %s\t", student[i].address);
        printf("\n");
    }

    return 0;
}