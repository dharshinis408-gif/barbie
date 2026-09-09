#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int stack[MAX];
int top = -1;
// Function to check if the stack is full
int isFull() {
return (top == MAX - 1);
}
// Function to check if the stack is empty
int isEmpty() {
return (top == -1);
}
// Function to push an element onto the stack
void push(int value) {
if (isFull()) {
printf("Stack Overflow! Cannot push %d.\n", value);
return;
}
top++;
stack[top] = value;
printf("%d pushed onto stack.\n", value);
}
// Function to pop an element from the stack
int pop() {
int popped_value;
if (isEmpty()) {
printf("Stack Underflow! Cannot pop from an empty stack.\n");
return -1;
}
popped_value = stack[top];
top--;
printf("%d popped from stack.\n", popped_value);
return popped_value;
}
// Function to peek at the top element
int peek() {
if (isEmpty()) {
printf("Stack is empty. No element to peek.\n");
return -1;
}
printf("Top element is: %d\n", stack[top]);
return stack[top];
}
// Function to display all stack elements
void display() {
int i;
if (isEmpty()) {
printf("Stack is empty.\n");
return;
}
printf("Stack elements (bottom to top): ");
for (i = 0; i <= top; i++) {
printf("%d ", stack[i]);
}
printf("\n");
}
// Function to count elements in the stack
int count() {
int c = top + 1;
printf("Total elements in stack: %d\n", c);
return c;
}
// Function to search for an element in the stack
int search(int key) {
int i;
if (isEmpty()) {
printf("Stack is empty. Cannot search.\n");
return -1;
}
for (i = 0; i <= top; i++) {
if (stack[i] == key) {
printf("Element %d found at position %d (from bottom).\n", key, i + 1);
return i;
}
}
printf("Element %d not found in stack.\n", key);
return -1;
}
int main() {
int choice, value, key;
printf("=========================================\n");
printf(" STACK OPERATIONS (Array-Based)\n");
printf("=========================================\n");
do {
printf("\n1. PUSH\n");
printf("2. POP\n");
printf("3. PEEK\n");
printf("4. DISPLAY\n");
printf("5. COUNT\n");
printf("6. SEARCH\n");
printf("7. EXIT\n");
printf("=========================================\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1:
printf("Enter the value to push: ");
scanf("%d", &value);
push(value);
break;
case 2:
pop();
break;
case 3:
peek();
break;
case 4:
display();
break;
case 5:
count();
break;
case 6:
printf("Enter the element to search: ");
scanf("%d", &key);
search(key);
break;
case 7:
printf("Exiting program. Goodbye!\n");
printf("=========================================\n");
break;
default:
printf("Invalid choice! Please enter a valid option (1-7).\n");
}
} while (choice != 7);
return 0;
}