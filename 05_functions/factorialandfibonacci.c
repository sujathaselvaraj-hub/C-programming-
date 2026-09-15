#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

void fibonacci(int n) {
    int first = 0, second = 1;
    int next, i;
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n, choice;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    printf("1. Factorial\n");
    printf("2. Fibonacci Series\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch (choice) {
        case 1:
            printf("Factorial = %lld\n", factorial(n));
            break;
        case 2:
            fibonacci(n);
            break;
        default:
            printf("Invalid Choice\n");
    }
    return 0;
}
