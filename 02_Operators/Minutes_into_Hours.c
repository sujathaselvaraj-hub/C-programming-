#include <stdio.h>
int main() {
    int mins, hours;
    printf("Enter minutes:");
    scanf("%d", &mins);
    printf("The time in hour and minutes is %d hours and %d mins", mins/60, mins%60);
    return 0;
}