#include <stdio.h>
int main(){
    int n, digit, checksum=0;
    printf("Enter n:");
    scanf("%d", &n);
    while (n!=0){
        digit=n%10;
        n=n/10;
        checksum=checksum+digit;
        
       
    }
     printf("The Checksum: %d", checksum);
    return 0;

}