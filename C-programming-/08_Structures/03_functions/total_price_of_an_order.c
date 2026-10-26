#include <stdio.h>
struct Order{
    int qty;
    float unitPrice;
};
float calculateTotal(struct Order o)
{
    return o.qty * o.unitPrice;
}
int main(){
    struct Order o;
    printf("Enter quantity and unit Price:");
    scanf("%d %f", &o.qty, &o.unitPrice);
    printf("Total=%.2f", calculateTotal(o));
    return 0;
}