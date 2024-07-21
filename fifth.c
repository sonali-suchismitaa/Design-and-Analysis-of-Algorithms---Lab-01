// Addition of digits of a number
#include <stdio.h>
int sumOfDigits (int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int ans = sumOfDigits(n);
    printf("The sum of digits is : %d", ans);
}

int sumOfDigits (int n)
{
    if (n == 0)
    return 0;
    else 
    return (n % 10 + sumOfDigits(n / 10));
}