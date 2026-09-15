#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter a first number:");
    scanf("%d", &num1);
    printf("Enter a second number:");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("The first number is %d and the second number is %d.", num1, num2);
    return 0;
}