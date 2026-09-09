#include <stdio.h>

#define MAX 100

void displayArray(int arr[], int n);
void radixSort(int arr[], int n);
int getMax(int arr[], int n);
void countSortByDigit(int arr[], int n, int place);
void copyArray(int source[], int dest[], int n);

int main()
{
    int arr[MAX];
    int n, i;

    printf("=========================================\n");
    printf("              RADIX SORT\n");
    printf("=========================================\n");

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d non-negative numbers:\n", n);

    for (i = 0; i < n; i++)
    {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nBefore sorting: ");
    displayArray(arr, n);

    radixSort(arr, n);

    printf("After sorting : ");
    displayArray(arr, n);

    return 0;
}

void displayArray(int arr[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

void copyArray(int source[], int dest[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        dest[i] = source[i];
}

int getMax(int arr[], int n)
{
    int max = arr[0];
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

void countSortByDigit(int arr[], int n, int place)
{
    int output[MAX];
    int count[10] = {0};
    int i, digit;

    for (i = 0; i < n; i++)
        count[(arr[i] / place) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--)
    {
        digit = (arr[i] / place) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    copyArray(output, arr, n);
}

void radixSort(int arr[], int n)
{
    int max = getMax(arr, n);
    int place;

    for (place = 1; max / place > 0; place *= 10)
        countSortByDigit(arr, n, place);
}