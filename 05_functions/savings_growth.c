#include <stdio.h>
int bank(int balance , int year){
    int New_Balance;
    int i;
    for (i=1; i<=year; i++){
        New_Balance= balance + (balance *6/100);
        printf("\nBalance for year %d is %d\n", i, New_Balance);
        balance= New_Balance;
    }
    printf("\nFinal Balance %d\n", New_Balance);
    return New_Balance;

}
int main(){
    int balance, year;
    printf("\nEnter previous balance:\n");
    scanf("%d", &balance);
    printf("\nEnter a year:\n");
    scanf("%d", &year);
    bank(balance, year);
    return 0;
}