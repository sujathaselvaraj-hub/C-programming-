#include <stdio.h>
int factorial(int n){
    int fact=1;
    int sum=0;
    int i;
    if (n==0){
        printf("factorial is 1\n");
        return 1;
        
    }
    for (i=1;i<=n;i++){
        fact= fact * i;
        sum=sum+fact;
    }
    printf("The factorial sum is %d", sum);
    
    return fact;
}
int main(){
    int n;
    printf("Enter number:");
    scanf("%d", &n);
    factorial(n);
    return 0;
}