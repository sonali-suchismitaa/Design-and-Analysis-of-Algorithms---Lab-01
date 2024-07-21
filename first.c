//Print the first n numbers
#include <stdio.h>
void print(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    print(n);
}

void print(int n)
{
    if (n==0)
    return;

    else 
    {
        printf("%d ", n);
        print(n-1);
    }
}