#include <stdio.h>
int josephus(int n, int k)
{
if (n == 1)
return 0;
return (josephus(n - 1, k) + k) % n;
}
int main()
{
int n, k;
int survivor;
printf("Enter number of people:");
scanf("%d", &n);
printf("Enter the elimination interval K:");
scanf("%d", &k);
if (n <= 0 || k <= 0)
{
printf("Invalid Input:");
return 0;
}
survivor = josephus(n, k) + 1;
printf("Last Surviving Person = %d", survivor);
return 0;}