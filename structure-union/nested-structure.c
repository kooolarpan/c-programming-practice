// Nested Type Structures
#include <stdio.h>

struct studentDetails {
    char name[20];
    int roll;
    struct dateofBirth dob;
} student;

struct dateofBirth {
    int day, month, year;
};

int main() {
    printf("Enter your name: ");
    fgets(student.name, sizeof(student.name), stdin);
    printf("Enter your roll: ");
    scanf("%d", &student.roll);
    printf("Enter your date of birth (D-M-Y):");
    scanf("%d%d%d", &student.dob.day, &student.dob.month, &student.dob.year);

    printf("\nDisplaying the details of student\n");
    printf("Name: %s", student.name);
    printf("Roll: %d\n", student.roll);
    printf("Date of Birth: %d-%d-%d\n", student.dob.day, student.dob.month, student.dob.year);

    return 0;
}
