#include <stdio.h>
int main(){
    int celsius, farenhiet;
    printf("Enter the degree in Celsius:");
    scanf("%d", &celsius);
    printf("Farenhiet is %d, Celsius is %d.", (farenhiet=(celsius*9/5)+32), celsius);
    return 0;
}