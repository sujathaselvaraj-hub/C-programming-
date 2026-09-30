#include <stdio.h>
int main(){
    int n, multi,i, eq=1;
    printf("Enter a number:");
    scanf("%d", &n);
    printf("Enter multiplier:");
    scanf("%d", &multi);
    for (i=0; i<=multi;i++){
        eq=n*i;
        printf("%d into %d is %d\n", n, multi, eq);
    }    
   
    return 0;
}