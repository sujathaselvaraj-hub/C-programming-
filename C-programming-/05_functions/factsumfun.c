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
    }
   
    
    return fact;
}
int main(){
    int n, sum=0, i;
    printf("Enter number:");
    scanf("%d", &n);
        for (i=1;i<=n;i++){
            sum=sum+factorial(i);
        }
    printf("The factorial sum is %d", sum);
    factorial(n);
    return 0;
}