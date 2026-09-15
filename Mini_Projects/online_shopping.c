#include <stdio.h>
int discount(int n){
    if (n<=1000){
        printf("No discount.");
        return n;
    }
    else if (n>=1001 && n<=4999){
        printf("The discount is %d", n* 5/100);
        return n;
    }
    else if (n>=5000 && n<=9999){
        printf("The discount is %d", n* 10/100);
        return n;
    }
    else {
        printf("The discount is %d", n* 15/100);
        return n;
    }
}
int main() {
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    printf(discount(n));
    return 0;


}