#include <stdio.h>
struct Student{
    char name[20];
    float cgpa;
};

void updateCGPA(struct Student *s, float bonus)
{
    s->cgpa+=bonus;
}
int main(){
    struct Student s;
    printf("Enter student name:");
    scanf("%s", s.name);
    printf("Enter current CGPA:");
    scanf("%f", &s.cgpa);
    updateCGPA(&s, 0.5);
    printf("Updated CGPA of %s=%.2f", s.name, s.cgpa);
    return 0;
}
