#include <stdio.h> 
struct student{
    int rollno;
    char name[20];
    float marks;};

int main(){
    struct student s[5];
    int i;
    for (i=0;i<5;i++){
        printf("Enter the details of the student %d\n-", i+1);
        printf("\nEnter roll no:\n");
        scanf("%d", &s[i].rollno);
        printf("\nEnter name:\n");
        scanf("%s", s[i].name);
        printf("\nEnter marks:\n");
        scanf("%f", &s[i].marks);
    }

    printf("---Academic Records---");
        for(i=0;i<5;i++){
            printf("\nStudent %d\n", i+1);
            printf("Roll Number:%d\n", s[i].rollno);
            printf("Name: %s\n", s[i].name);
            printf("Makrs:%.2f\n", s[i].marks);
        }
    
    return 0;
}