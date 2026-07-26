#include <stdio.h>
int main(){
    int n, count=0, number=2, flag;
    printf("Enter a number:");
    scanf("%d",&n);
    while (count<n){
        flag =1;
        for (int i=2; i*i<=number;i++){
            if (number%i==0){
                flag=0;
                break;
            }
        }
        if (flag==1){
            printf("%d\n", number);
            count++;
        }
        number++;
    }
    return 0;
}