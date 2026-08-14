#include <stdio.h>
int reversenumber(int n){
    int rev=0, digit;
    while(n!=0){
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    return rev;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf ("%d", &n);
    printf("Reverse number =%d", reversenumber(n));
    return 0;



}
