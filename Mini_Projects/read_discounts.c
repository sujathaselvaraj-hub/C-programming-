/*Write a C program that reads the number of transactions made by a customer. For each
transaction, read the transaction amount.
Using a loop:
 Calculate the total amount spent.
 Count the number of transactions above ₹5,000.
 Find the total amount spent on transactions above ₹5,000.
 Display the results.
Constraint: Do not use arrays.
Concepts: for/while loop, variables, arithmetic, conditions.*/


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

/*#include <stdio.h>

int main() {
    int n;
    float amount, totalAmount = 0, totalAbove5000 = 0;
    int countAbove5000 = 0;

    printf("Enter the number of transactions: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter amount for transaction %d: Rs. ", i);
        scanf("%f", &amount);

        totalAmount += amount;

        if (amount > 5000) {
            countAbove5000++;
            totalAbove5000 += amount;
        }
    }

    printf("\n--- Results ---\n");
    printf("Total amount spent: Rs. %.2f\n", totalAmount);
    printf("Number of transactions above Rs. 5000: %d\n", countAbove5000);
    printf("Total amount spent on transactions above Rs. 5000: Rs. %.2f\n", totalAbove5000);

    return 0;
}*/
    

