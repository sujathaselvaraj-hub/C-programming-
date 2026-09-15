#include <stdio.h>
void atm(int n){
    int balance=10000;
    if (balance>=n){
    if (n % 100==0){
        printf("Widthrawal Approved.");
    }
    else{
            printf("Withdrawal disapproved or enter in a multiple of 100.");

}}
    else{
        printf("Low bank balance dawg.");
    }

}
int main(){
    int n, balance;
    printf("Enter widthrawal:");
    scanf("%d", &n);
    atm(n);
return 0;

}