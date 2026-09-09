#include<stdio.h>
#define MAX 100 
 void displayArray(int arr[], int n); 
void insertionSort(int arr[], int n);  
int main() {    
 int arr[MAX];    
 int n, i;    
  printf("=========================================\n");  
   printf("            INSERTION SORT\n");  
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
 insertionSort(arr, n);     
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
  void insertionSort(int arr[], int n) {  
   int i, key, j;   
  for (i = 1; i < n; i++) {    
     key = arr[i];       
  j = i - 1;        
  while (j >= 0 && arr[j] > key) {           
  arr[j + 1] = arr[j];           
  j--;        
 }      
   arr[j + 1] = key;    
 } 
}