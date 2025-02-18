// Find fibonacci series and check whether the term is prime or not

#include <stdio.h>
int temp;

int findFibonacci(int num) {
    int i, c, a[num];
    a[0] = 0;
    a[1] = 1;
    printf("%d\t", a[0]);
    printf("%d\t", a[1]);
    for (i = 2; i < num; i++) {
        a[i] = a[0] + a[1];
        a[0] = a[1];
        a[1] = a[i];
        printf("%d\t", a[i]);
    }
    int what, val[num];
    printf("\nWhich term you want to check? ");
    scanf("%d", &what);
    temp = a[what - 1];
    return temp;
}

int isPrime(int temp) {
    if (temp <= 1) {
        printf("Your number %d is not a prime number", temp);
        return 0;
    }
    int is_prime = 1, i;
    for (i = 2; i < temp; i++) {
        if (temp % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (is_prime) {
        printf("Your number %d is a prime number\n", temp);
    } else {
        printf("Your number %d is not a prime number\n", temp);
    }
}
int main() {
    int num, last_value;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = findFibonacci(num);
    isPrime(temp);

    return 0;
}