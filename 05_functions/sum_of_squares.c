#include <stdio.h>
#include <math.h>
int squares(int n){
    int i, square, sum=0;
    for (i=1; i<=n; i++){
        square= pow(i, 2);
        sum+=square;
    }
    printf("The sum of squares is %d", sum);
    return sum;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    squares(n);
    return 0;
}