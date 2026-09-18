#include <stdio.h>
int main(){
    int num;
    printf("Enter your marks:");
    scanf("%d", &num);
    if (num>=40){
        printf("You have passed!");
    }
    else{
        printf("You have failed...");
    }
return 0;
}