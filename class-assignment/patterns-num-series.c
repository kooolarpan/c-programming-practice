// WAP to print number patterns

#include <stdio.h>
int pattern_a() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int pattern_b() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int pattern_c() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
}

int pattern_d() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int pattern_e() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int pattern_f() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 5; j >= i; j--) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    printf("Printing Number Patterns\n");
    pattern_a();
    printf("\n");
    pattern_b();
    printf("\n");
    pattern_c();
    printf("\n");
    pattern_d();
    printf("\n");
    pattern_e();
    printf("\n");
    pattern_f();
    return 0;
}
