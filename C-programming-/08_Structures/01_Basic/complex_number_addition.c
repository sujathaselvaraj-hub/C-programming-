#include <stdio.h>

struct Complex {
    int real;
    int imagine;
};

int main() {
    int realsum = 0, imaginesum = 0;
    struct Complex C1, C2;
    
    printf("Enter real and imaginary parts for the first number: ");
    scanf("%d %d", &C1.real, &C1.imagine);
    
    printf("Enter real and imaginary parts for the second number: ");
    scanf("%d %d", &C2.real, &C2.imagine);
    
    realsum = C1.real + C2.real;
    imaginesum = C1.imagine + C2.imagine;
    
    printf("Sum = %d + %di\n", realsum, imaginesum);
    
    return 0;
}
