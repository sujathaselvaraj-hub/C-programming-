#include <stdio.h>
#include <ctype.h>
char main(){
    char str;
    printf("Enter a character:");
    scanf("%c", &str);
    if (isupper(str)){
        printf("%c is uppercase.", str);
    }
    else{
        printf("%c is lowercase.", str);
    }
    return 0;
}