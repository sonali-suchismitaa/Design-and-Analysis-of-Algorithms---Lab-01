//Enter the sum of first n numbers
#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ans = sum(n);
    printf("%d", ans);
}

int sum(int n)
{
    if (n==0)
    return 0;

    else 
    return (n + sum(n-1));
}