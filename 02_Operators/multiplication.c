#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("The product of %d and %d is: %d", num1, num2, num1*num2);
    return 0;
}