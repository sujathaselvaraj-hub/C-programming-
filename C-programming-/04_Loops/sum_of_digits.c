#include <stdio.h>
int main(){
    int n, count, original, sum=0;
    original=n;
    printf("Enter a number:");
    scanf("%d", &n);
    while(n!=0){
        count=n%10;
        sum=sum+count;
        n=n/10;
    }
    printf("Sum of the digits in %d", sum);
    return 0;

}