#include <stdio.h>

int parkingfee(int hours){
    int charge, basefare;
    if (hours<=2){
        charge=2*30;
    }
    else if (hours>=2 && hours<=5){
        charge=2*30+(hours-2)*20;
    }
    else {
        charge= 2*30+3*20+(hours-5)*10;
    }
    printf("The parking fee is %d", charge);
    return charge;
}

int main(){
    int hours;
    printf("Enter hours:");
    scanf("%d", &hours);
    parkingfee(hours);
    return 0;
}
