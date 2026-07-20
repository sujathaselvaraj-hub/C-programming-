#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your name:");
    scanf("%s", name);
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    char city[50];
    printf("Enter your city:");
    scanf("%s", &city);
    printf("Your name is %s, your age is %d, your city is %s", name, age, city);
    return 0;
}