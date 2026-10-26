/*to store city's temperature in celsius using a structure and convert it to Fahrenheit*/

#include <stdio.h>
struct Weather{
    char city[20];
    float celsius;
    float fahrenheit;
};
int main(){
    struct Weather w1;
    printf("Enter the city's name:\n");
    scanf("%s",w1.city);
    printf("Enter Celsius temperature:\n");
    scanf("%f", &w1.celsius);
    w1.fahrenheit= (9/5)*w1.celsius +32;
    printf("The farehneit value of %s city is %.2f.\n", w1.city, w1.fahrenheit);
    return 0;
}