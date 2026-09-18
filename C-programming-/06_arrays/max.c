#include <stdio.h>
int main(){
    int n, max=0, a[50], i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        printf("Enter an element: ");
        scanf("%d", &a[i]);

    }
    max=a[0];
    if (a[i]> max){

        max=a[i];
    }
    printf("The maximum element is %d", a[i]);
    return 0;



}