#include <stdio.h>
struct Student{
    int roll;
    char name[20];
    float marks;
};
int main(){
    struct Student S;
    printf("Enter roll number:");
    scanf("%d", &S.roll);
    printf("Enter name:");
    scanf("%s", S.name);
    printf("Enter marks:");
    scanf("%f", &S.marks);
    printf("\nName:%s\nMarks:%.1f\n", S.name, S.marks);
    return 0;
}