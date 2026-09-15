#include <stdio.h>
char main(){
    char str;
    printf("Enter a character:");
    scanf("%c", &str);
    if (str=='a' || str== 'i' || str=='o' || str=='e'|| str=='u'){
        printf("It is a vowel");
    }
    else {
        printf("It is not a vowel");
    }
    return 0;
}