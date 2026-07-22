#include <stdio.h>
int main(){
    int n, count, reverse;
    printf("Enter a number:");
    scanf("%d", &n);
    while (n!=0){
        count=n%10;
        reverse=reverse*10+count;
        n=n/10;

    }
    printf("Reverse=%d", reverse);

    return 0;
}