#include <stdio.h>
int factorial(int n){
    int fact=1, i, sum=0;
    for (i=1; i<=n; i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int fact=1, i, sum=0, n;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i=1; i<=n; i++){
        sum=sum+factorial(i)/i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}