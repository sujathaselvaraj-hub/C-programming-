#include <stdio.h>
int main(){
    int n, digit, largest=0;
    printf("enter a number:");
    scanf("%d", &n);
    while(n!=0){
        digit=n%10;
        if(digit>largest){
            largest=digit;
            printf("The largest digit is %d\n", largest);
        }
        n=n/10;
        
    
    }
    return 0;
}