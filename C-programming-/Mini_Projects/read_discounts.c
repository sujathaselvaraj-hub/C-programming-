#include <stdio.h>
int main(){
    int n;
    float total_amt=0, amount, total5000=0;
    int count5000=0,i;

    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    for (i=1;i<=n;i++){
        printf("Enter a amount %d: Rs. ", i);
        scanf("%f", &amount);
        total_amt += amount; 

        if (amount> 5000){
            count5000++;
            total5000+=amount;
        }
        }

    printf("\n--- Results ---\n");
    printf("Total amount spent: Rs. %.2f\n", total_amt);
    printf("Number of transactions above Rs. 5000: %d\n", count5000);
    printf("Total amount spent on transactions above Rs. 5000: Rs. %.2f\n", total5000);

    return 0;
}

    

