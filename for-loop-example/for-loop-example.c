/* WAP that asks the user to input their roll no
and display it 10 times */

#include <stdio.h>
int main()
{
    int rollNumber;
    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);
    for(int i = 1; i <= 10; i++){
        printf("%d\n", rollNumber);
    }
    return 0;
}