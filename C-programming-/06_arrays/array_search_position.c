#include <stdio.h>
int main()
{
    int a[100], i, n, search, position=-1;
    printf("Enter a number of elements:");
    scanf("%d", &n);
    printf("Enter an array:");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);

    }
    printf("Enter your search element:");
    scanf("%d", &search);
    for (i=0;i<n;i++){
        if (a[i]==search){
            position=i+1;
            break;
        }
    }
        if (position!=1){
        printf("%d found at position %d\n", search, position);

        }
        else {
        printf("Element no found\n");}
        return 0;


    }



