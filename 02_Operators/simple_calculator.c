#include<stdio.h>

int main(){
    char expression;
    int num1,num2,res;

    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    printf("Enter your expression('+','-','*','/'):");
    scanf(" %c",&expression);

    switch(expression){
        case '+':
            res=num1+num2;
            printf("Result=%d",res);
            break;

        case '-':
            res=num1-num2;
            printf("Result=%d",res);
            break;

        case '*':
            res=num1*num2;
            printf("Result=%d",res);
            break;

        case '/':
            if(num2!=0){
                res=num1/num2;
                printf("Result=%d",res);
            }
            else{
                printf("Division by zero is not possible.");
            }
            break;

        default:
            printf("Invalid operator.");
    }

    return 0;
}