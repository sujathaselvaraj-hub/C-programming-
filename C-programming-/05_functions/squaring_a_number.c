#include <stdio.h>
int square(int x){
    return x*x;
}
int main(){
    int x;
    int result;
    printf("Enter a number:");
    scanf("%d", &x);
    result= square(x);
    printf("Square of the number is: %d", result);
    return 0;


}