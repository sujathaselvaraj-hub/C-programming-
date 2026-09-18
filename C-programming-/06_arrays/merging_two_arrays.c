#include <stdio.h>
int main()
{
    int n1, n2, a[100], b[100], merge=0, i, j;
    printf("Enter number of elements for the first array:");
    scanf("%d", &n1);
    printf("Number of elements for the second array:");
    scanf("%d", &n2);
    printf("Enter the first array:\n");
    
    for (i=0;i<n1;i++){
        scanf("%d", &a[i]);
    }
    printf("Enter the second array:");
    for (j=0;j<n2;j++){
        scanf("%d", &b[j]);
    }
    merge = a[i] + b[j];
    printf("Merged elements %d", merge);
    return 0;


}