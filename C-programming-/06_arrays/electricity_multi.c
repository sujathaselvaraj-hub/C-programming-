#include <stdio.h>


int sumelectric(int a[][10], int r, int c){
    int i, j;
    int total_electricity = 0; 
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            total_electricity += a[i][j];
        }
    }
    return total_electricity; 
}

int main(){

    int consumption[100][10]; 
    int r; 
    int c; 
    int i;
    int j;

   
    printf("Enter number of houses and months: ");
    scanf("%d %d", &r, &c);

    printf("Enter the consumption values: ");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &consumption[i][j]);
        }
    }


    int totalConsumption = sumelectric(consumption, r, c);
    printf("Total electricity consumption = %d\n", totalConsumption);

    return 0;
}
