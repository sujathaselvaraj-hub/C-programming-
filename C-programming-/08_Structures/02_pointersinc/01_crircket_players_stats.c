/* to access and display a cricket player's statistics using a pointer to structure*/
#include <stdio.h>
struct Player{
    char name[20];
    int matches;
    float average;
};
int main(){
    struct Player p, *ptr;
    ptr=&p;
    printf("Enter the name:");
    scanf("%s", ptr->name);
    printf("Enter matches played:");
    scanf("%d", &ptr->matches);
    printf("Enter batting average:");
    scanf("%f", &ptr->average);
    printf("Player=%s\n", ptr->name);
    printf("Matches=%d\n", ptr->matches);
    printf("Average=%.2f\n", ptr->average);
    return 0;
}