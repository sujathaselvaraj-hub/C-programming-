#include <stdio.h>
int main(){
    int r, pi;
    printf("Enter the radius:");
    scanf("%d", &r);
    pi=3.14;
    printf("The area of the circle with radius %d is %d", r, (pi*(r*r)));
    return 0;
}