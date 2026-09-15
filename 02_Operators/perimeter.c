#include <stdio.h>
int main(){
    int l, b;
    printf("Enter length:");
    scanf("%d", &l);
    printf("Enter breadth:");
    scanf("%d", &b);
    printf("The perimeter of length %d and breadth %d is %d.", l, b, (2*(l+b)));
    return 0;
}