#include <stdio.h>
#define MAX 100
void displayArray(int arr[], int n);
void quickSort(int arr[], int low, int high);
int partition(int arr[], int low, int high);
int main() {
 int arr[MAX];
 int n, i;
 printf("=========================================\n");
 printf(" QUICK SORT\n");
 printf("=========================================\n");
 printf("Enter number of elements: ");
 scanf("%d", &n);
 printf("Enter %d numbers:\n", n);
 for (i = 0; i < n; i++) {
 printf("Element [%d]: ", i);
 scanf("%d", &arr[i]);
 }
 printf("\nBefore sorting: ");
 displayArray(arr, n);
 quickSort(arr, 0, n - 1);
printf("After sorting : ");
 displayArray(arr, n);
 return 0;
}
void displayArray(int arr[], int n) {
 int i;
 for (i = 0; i < n; i++)
 printf("%d ", arr[i]);
 printf("\n");
}
void quickSort(int arr[], int low, int high) {
 int pivotIndex;
 if (low < high) {
 pivotIndex = partition(arr, low, high);
 quickSort(arr, low, pivotIndex - 1);
 quickSort(arr, pivotIndex + 1, high);
 }
}
int partition(int arr[], int low, int high) {
 int pivot = arr[high];
 int i = low - 1;
 int j, temp;
for (j = low; j < high; j++) {
 if (arr[j] <= pivot) {
 i++;
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }
 }
 temp = arr[i + 1];
 arr[i + 1] = arr[high];
 arr[high] = temp;
 return i + 1;
}
