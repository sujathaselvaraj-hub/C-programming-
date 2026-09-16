#include <stdio.h>

int main() {
    double x, sum = 0.0, term = 1.0;
    int n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    printf("\nTerms of the series:\n");
    for (int i = 1; i <= n; i++) {
        term = term * (x / i);
        printf("Term %d: %.4lf\n", i, term);
        sum += term;
    }

    printf("\nFinal Sum: %.4lf\n", sum);

    return 0;
}