#include <stdio.h>
float main () {
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);
    printf("The number with 2 decimal places is: %.2f\n", num);
    return 0;
}