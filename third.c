//Add the n elements of an array
#include <stdio.h>
int addElement(int [], int );

int main()
{
    int n;
    int ans;
    printf("Enter the number of elements in the array : ");
    scanf(" %d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ans = addElement(arr, n);
    printf("The sum is : %d", ans);
}

int addElement(int arr[], int n)
{
    if (n==1)
    return arr[0];

    else
    return arr[n-1] + addElement(arr, n-1);
}