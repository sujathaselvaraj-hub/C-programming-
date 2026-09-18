#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 2;
    int res1, res2, res3;
    res1 = a + b * c;
    res2 = (a + b) * c;
    res3 = a * b / c;

    printf("Expression 1 (a + b * c) = %d\n", res1);
    printf("Expression 2 ((a + b) * c) = %d\n", res2);
    printf("Expression 3 (a * b / c) = %d\n", res3);

    return 0;
}
