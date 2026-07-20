#include <stdio.h>
int main(){
    int one, two, three, four, five;
    printf("Enter the subject scores:");
    scanf(("%d %d %d %d %d"), &one, &two, &three, &four, &five);
    printf("The average of the subjects is %d.", (one+two+three+four+five)/5);
    return 0;
}