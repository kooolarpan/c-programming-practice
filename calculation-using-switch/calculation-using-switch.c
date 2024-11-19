/* WAP that asks the user to input two numbers 
and perform calculation based on following choices. 

Choice  - Calculation
a - addition
s - subtraction
d - divide
m - multiplication
default - Try Again

*/

#include <stdio.h>
int main(){
    int firstNumber, secondNumber;
    char calculationChoice;
    printf("Enter any two numbers: ");
    scanf("%d%d",&firstNumber,&secondNumber);
    printf("Enter your choice: (a,s,d,m): ");
    scanf(" %c",&calculationChoice);
    switch (calculationChoice){
    case 'a':
        printf("\nThe sum of two number is: %d",firstNumber+secondNumber);
        break;
    case 's':
        printf("\nThe subtraction of two number is: %d",firstNumber-secondNumber);
        break;
    case 'd':
        if(firstNumber<secondNumber){
            printf("\nThe division of two number is: %.2f",(float)secondNumber/firstNumber);
        }else{
            printf("\nThe division of two number is: %.2f",(float)firstNumber/secondNumber);
        }
        break;
    case 'm':
        printf("\nThe multiplication of two number is: %d",firstNumber*secondNumber);
        break;
    
    default:
        printf("\nTry Again");
        break;
    }
    return 0;

}