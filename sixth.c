// Reverse a number
#include <stdio.h>
static int sum = 0, rem;
int revNum(int num);

int main()
{
    int num, rev;
    printf("Enter a number : ");
    scanf("%d", &num);
    rev = revNum(num);
    printf("The number after reversing is :%d", rev);
    return 0;
}
int revNum(int num)
{
    if (num)
    {
        rem = num % 10;
        sum = sum * 10 + rem;
        revNum(num / 10);
    }
    else
    return sum;
}
