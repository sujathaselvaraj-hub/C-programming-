/*to store and display the details of the car. */
#include <stdio.h>
struct Car{
    char model[20];
    char regno[20];
    float price;
};

int main(){
    struct Car c1;
    printf("Enter car model:");
    scanf("%s", &c1.model);
    printf("Enter registration number:");
    scanf("%s", c1.regno);
    printf("Enter price:");
    scanf("%f", &c1.price);
    printf("Model=%s\n", c1.model);
    printf("Registration No=%s\n", c1.regno);
    printf("Price=%.2f\n", c1.price);
    return 0;
}