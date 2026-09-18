
#include <stdio.h>
int smartclock(int n, int digit, int clock){
    while (n>=0){
        digit=n%10;
        if (digit%2==0){
            clock=clock+1;
            return n;
        }
        else{
            printf("Invalid code.");
        }
    }

}