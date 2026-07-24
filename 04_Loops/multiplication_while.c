#include <stdio.h>
int main(){
    int n, count, original, multi=1;
    original=n;
    printf("Enter a number:");
    scanf("%d", &n);
    while(n!=0){
        count=n%10;
        multi=multi*count;
        n=n/10;
    }
    printf("Multiplication of the digits is %d", multi);
    return 0;

}