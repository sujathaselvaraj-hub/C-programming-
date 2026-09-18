#include <stdio.h>
int main(){
    int n, a[100], i, j, temp;
    printf("Enter number of subjects:");
    scanf("%d", &n);
    printf("Enter the marks for the subjects:");
    for (i=0; i<n; i++){
        scanf("%d", a[i]);
    }
    for (j=0;j<n-i-1;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }

printf("Marks in ascending order:");
for (i=0;i<n;i++){
    printf("%d\t", a[i]);

printf("Highest marks: %d", a[n-1]);}
return 0;
}

