/* WAP to create a structure name Employee having members name, id and
department. Store the info of 5 employees and display the information */

#include <stdio.h>
#include <string.h>
struct EmployeeDetails {
    char memberName[40];
    int memberId;
    char departmentName[30];
}employee[5];

int main() {
    for (int i = 0; i < 5; i++) {
        printf("\nEnter name, id, department name:\n");
        fgets(employee[i].memberName, sizeof(employee[i].memberName), stdin);
        scanf("%d",&employee[i].memberId);
        getchar();
        fgets(employee[i].departmentName, sizeof(employee[i].departmentName), stdin);
    }
    printf("\nDisplaying the Employee's details whose department is IT\n");
    for (int i = 0; i < 5; i++) {
        if (strcmp(employee[i].departmentName, "IT\n") == 0) {
            printf("Name: %s", employee[i].memberName);
            printf("Id: %d\n", employee[i].memberId);
            printf("Dep: %s", employee[i].departmentName);
           
        }
    }
    return 0;
}