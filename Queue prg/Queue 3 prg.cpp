#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
int isFull(){
return(rear==MAX-1);
}
int isEmpty(){
return(front==-1 || front>rear);
}
void enqueue(int value){
if (isFull()) {
printf("Queue Overflow!Cannot enqueue %d.\n",value);
return;
}
if(front == -1){
front=0;
}
rear++;
queue[rear]=value;
printf("%d enqueue into the queue.\n",value);
}
int dequeue(){
int dequeued_value;
if (isEmpty()) {
printf("Queue Underflow!Cannot dequeue from an empty queue.\n");
return-1;
}
dequeued_value=queue[front];
front++;
if(front>rear){
front=-1;
rear=-1;
}
printf("%d dequeued from the queue.\n",dequeued_value);
return dequeued_value;
}
int peek(){
if (isEmpty()){
printf("Queue is empty.No element to peek.\n");
return-1;
}
printf("Front element is: %d\n",queue[front]);
return queue[front];
}
void display(){
int i;
if(isEmpty()){
printf("Queue is empty.\n");
}else{
printf("Queue elements(front to rear):");
for(i = front;i<=rear;i++){
printf("%d",queue[i]);
}
printf("\n");
}
printf("FRONT=%d,REAR=%d\n",front,rear);
}
int count(){
int c;
if (isEmpty()){
c = 0;
} else {
c = rear - front + 1;
}
printf("Total elements in queue:%d\n",c);
return c;
}
int search(int key) {
int i,pos;
if (isEmpty()){
printf("Queue is empty.Cannot search.\n");
return -1 ;
}
for (i = front;i<=rear;i++){
if(queue[i]==key){
pos=i-front + 1;
printf("Element %d found at position %d(from front).\n",key,pos);
return i;
}
}
printf("Element %d not found in queue.\n",key);
return-1;
}
int main(){
int choice,value,key;
printf("====================================================================\n");
printf("QUEUE OPERATIONS (Array-Based)\n");
printf("=====================================================================\n");
do{
printf("\n1.ENQUEUE\n");
printf("2.DEQUEUE\n");
printf("3.PEEK\n");
printf("4.DISPLAY\n");
printf("5.COUNT\n");
printf("6.SEARCH\n");
printf("7.EXIT\n");
printf("======================================================================\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
case 1:
printf("Enter the value to enqueue:");
scanf("%d",&value);
enqueue(value);
break;
case 2:
dequeue();
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
printf("Enter the element to search:");
scanf("%d",&key);
search(key);
break;
case 7:
printf("Exiting program. Goodbye!\n");
printf("==========================================================================\n");
break;
default:
printf("Invalid choice! Please enter a valid (1-7).\n");
}
}while(choice!=7);
return 0;
}