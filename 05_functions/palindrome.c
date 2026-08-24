#include <stdio.h>
int palindrome(int n){
    int original, reversed=0, digit;
    original=n;
    if (n< 0){
        printf("Not a palindrome.");
    }
        while(n!=0){
            digit=n%10;
            reversed=reversed * 10 +digit;
            n=n/10;
        }
   
    if (original==reversed) {
        printf("%d is a palindrome number.", original);
        return 1;
    }
    else{
        printf("%d is not a palindrome number.", original);
    }
    return n;
}

int main(){
    int n, original, digit, reversed=0;
    printf("Enter a number:");
    scanf("%d", &n);
    palindrome(n);
    return 0;
}