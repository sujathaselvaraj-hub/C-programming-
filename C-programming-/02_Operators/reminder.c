// Find the remainder of two numbers using %.
#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter the two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("The reminder of %d and %d is %d", num1, num2, num1%num2);
    return 0;

}
