/*to dynamically allocate memory for a structure using malloc() and a pointer.*/

#include <stdio.h>
#include <stdlib.h>
struct Phone{
    char brand[20];
    float price;
};
int main(){
    struct Phone *ph;
    ph= (struct Phone*) malloc (sizeof(struct Phone));
    printf("Enter phone brand:");
    scanf("%s", ph->brand);
    printf("Enter phone price:");
    scanf("%f", &ph->price);
    printf("Brand=%s\n", ph->brand);
    printf("Price=%.2f\n",ph->price);
    free(ph);
    return 0;
}