#include <stdio.h>
int main(){
    int n, flag=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for (int i=2; i*i<=n; i++){
        if (n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("The number is prime.");
    }
    else{
        printf("The number is not prime.");
    }
    return 0;
}