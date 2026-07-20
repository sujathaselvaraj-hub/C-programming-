#include <stdio.h>
int  main(){
    int P, R, T;
    printf("Enter Principal:");
    scanf("%d", &P);
    printf("Enter Rate in Percentage (%):");
    scanf("%d",&R);
    printf("Enter Time (in years):");
    scanf("%d", &T);
    printf("The Simple Interest of Principal %d, Rate %d and Time %d is %d.", P, R, T, (P*R*T/100));
    return 0;
}