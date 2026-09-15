#include <stdio.h>
int main(){
    int n, i, t1, t2, nextterm;
    printf("Enter a number:");
    scanf("%d", &n);
    t1=0;
    t2=1;
    if (n>=1){
        
        printf("%d ", t1);
    }
    if (n>=2){
        printf("%d ", t2);
    }
    for (int i=3; i<=n; i++){
        nextterm=t1+t2;
        printf("%d ", nextterm);
        t1=t2;
        t2=nextterm;
        
    }
    return 0;
}