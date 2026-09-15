#include <stdio.h>
int sum(int n){
    int i, sum=0;
    for (i=1; i<=n; i++){
        sum+=i;
    }
    printf("The sum of squares is %d", sum);
    return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    sum(n);
    return 0;
}