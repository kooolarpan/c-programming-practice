// WAP to display the sum and average of 10 numbers entered by the user

#include <stdio.h>
int main(){
    int sum, number;
    float average;
    printf("Please enter any 10 numbers\n");
    for (int i = 1; i <= 10; i++){
        printf("Number-%d: ",i);
        scanf("%d",&number);
        sum += number;
    }
    
    printf("\nSum of 10 numbers: %d\n",sum);
    average = sum/10;
    printf("Average of 10 numbers: %.2f\n",average);
    return 0;
}