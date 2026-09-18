#include <stdio.h>
int main(){
    int r, pi;
    printf("Enter the radius:");
    scanf("%d", &r);
    pi=3.14;
    printf("The circumference of circle with radius %d is %d.", r, (2*pi*r));
    return 0;
}