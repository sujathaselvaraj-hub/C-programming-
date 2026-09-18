#include <stdio.h>
int main(){
    int l, b;
    printf("Enter Length:");
    scanf("%d", &l);
    printf("Enter Breadth:");
    scanf("%d", &b);
    printf("The area of length %d and breadth %d is %d", l, b, (l*b));
    return 0;
}