#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int arr[MAX];
int n = 0;
/* ── Function Prototypes ── */
void inputArray();
void displayArray();
void insertElement();
void deleteElement();
void printMenu();
/* ── Main Function ── */
int main() {
int choice;
printf("\n=============================================\n");
printf(" ARRAY OPERATIONS — DATA STRUCTURES IN C \n");
printf("=============================================\n");
do {
printMenu();
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: inputArray(); break;
case 2: displayArray(); break;
case 3: insertElement(); break;
case 4: deleteElement(); break;
case 5:
printf("\nExiting... Thank you!\n");
break;
default:
printf("Invalid choice! Please select 1-5.\n");
}
} while (choice != 5);
return 0;
}
/* ── Menu Display ── */
void printMenu() {
printf("\n===== ARRAY OPERATIONS MENU =====\n");
printf(" 1. Input Array\n");
printf(" 2. Display Array\n");
printf(" 3. Insert Element\n");
printf(" 4. Delete Element\n");
printf(" 5. Exit\n");
printf("==================================\n");
}
/* ── 1. Input Array ── */
void inputArray() {
int i;
printf("Enter number of elements (max %d): ", MAX);
scanf("%d", &n);
if (n <= 0 || n > MAX) {
printf("Invalid size! Please enter a value between 1 and %d.\n", MAX);
n = 0;
return;
}
for (i = 0; i < n; i++) {
printf(" Enter element %d: ", i + 1);
scanf("%d", &arr[i]);
}
printf("Array of %d elements entered successfully.\n", n);
}
/* ── 2. Display Array (Traversal) ── */

void displayArray() {
int i;
if (n == 0) {
printf("Array is empty! Please input elements first.\n");
return;
}
printf("Array (n=%d): ", n);
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
/* ── 3. Insert Element ── */
void insertElement() {
int pos, elem, i;
if (n >= MAX) {
printf("Array is full! Cannot insert any more elements.\n");
return;
}
printf("Enter position to insert (1 to %d): ", n + 1);
scanf("%d", &pos);
if (pos < 1 || pos > n + 1) {
printf("ERROR: Invalid position! Must be between 1 and %d.\n", n + 1);
return;
}
printf("Enter element to insert: ");
scanf("%d", &elem);
/* Shift elements to the right to make space */
for (i = n - 1; i >= pos - 1; i--) {
arr[i + 1] = arr[i];
}
arr[pos - 1] = elem;
n++;
printf("Inserted %d at position %d.\n", elem, pos);
printf("Array (n=%d): ", n);
displayArray();
}
/* ── 4. Delete Element ── */
void deleteElement() {
int pos, i;
if (n == 0) {
printf("Array is empty! Nothing to delete.\n");
return;
}
printf("Enter position to delete (1 to %d): ", n);
scanf("%d", &pos);
if (pos < 1 || pos > n) {
printf("ERROR: Invalid position! Must be between 1 and %d.\n", n);
return;
}
printf("Deleted element: %d\n", arr[pos - 1]);
/* Shift elements to the left to fill the gap */
for (i = pos - 1; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
n--;
printf("Array (n=%d): ", n);
displayArray();
}