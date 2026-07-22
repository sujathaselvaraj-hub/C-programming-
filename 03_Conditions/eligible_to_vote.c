#include <stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num>=18){
        printf("Person is eligible to vote.");
    }
    else{
        printf("Person is not eligible to vote");
    }
return 0;
}