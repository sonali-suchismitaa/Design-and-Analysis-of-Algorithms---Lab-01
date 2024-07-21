//Reverse an array
#include <stdio.h>
void reverseArray(int arr[], int n);

int main()
{
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements : ");
    for (int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr,n);

    for(int i=0; i<n; i++)
    {
        printf("%d", arr[i]);
    }
}

void reverseArray(int arr[], int n)
{
    int i = 0, j = n-1, temp;
    if (i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;

        reverseArray(arr + 1, n-2);
    }
}