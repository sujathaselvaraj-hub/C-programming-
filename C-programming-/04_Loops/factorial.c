#include <stdio.h>
int main(){
    int n;
    unsigned long long factorial=1;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n<0){
        printf("The factorial is 1");
    }

    for (int i=1;i<=n;i++){
        factorial*=i;
    }
    printf("Factorial %d is %llu", n, factorial);
    
    return 0;
}
 