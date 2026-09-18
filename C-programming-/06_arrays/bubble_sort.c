#include <stdio.h>
int main(){
    int n, a[100], i, j, temp;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    for (i=0;i<n;i++){
    for (j=0; j<n-i-1;j++){
        if (a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

}
printf("Sorted Array:\n");
for (i=0;i<n;i++){
    printf("%d\t", a[i]);}
    return 0;
}