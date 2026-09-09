#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

/* Insert at Beginning */
void insertBegin(int value)
{
    struct Node *newNode;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

/* Insert at End */
void insertEnd(int value)
{
    struct Node *newNode;
    struct Node *temp;

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    temp = head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}

/* Insert at Position */
void insertPos(int value, int pos)
{
    struct Node *newNode;
    struct Node *temp;
    int i;

    if (pos <= 0)
    {
        printf("Invalid Position\n");
        return;
    }

    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }

    newNode->data = value;

    if (pos == 1)
    {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL)
    {
        printf("Invalid Position\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

/* Delete from Beginning */
void deleteBegin()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;
    head = head->next;
    free(temp);

    printf("Node Deleted\n");
}

/* Delete from End */
void deleteEnd()
{
    struct Node *temp;
    struct Node *prev;

    prev = NULL;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (head->next == NULL)
    {
        free(head);
        head = NULL;
        printf("Node Deleted\n");
        return;
    }

    temp = head;

    while (temp->next != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    prev->next = NULL;
    free(temp);

    printf("Node Deleted\n");
}

/* Delete from Position */
void deletePos(int pos)
{
    struct Node *temp;
    struct Node *prev;
    int i;

    prev = NULL;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    if (pos <= 0)
    {
        printf("Invalid Position\n");
        return;
    }

    temp = head;

    if (pos == 1)
    {
        head = head->next;
        free(temp);
        printf("Node Deleted\n");
        return;
    }

    for (i = 1; i < pos && temp != NULL; i++)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Invalid Position\n");
        return;
    }

    prev->next = temp->next;
    free(temp);

    printf("Node Deleted\n");
}

/* Search */
void search(int value)
{
    struct Node *temp;
    int pos;

    temp = head;
    pos = 1;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            printf("Element found at position %d\n", pos);
            return;
        }

        temp = temp->next;
        pos++;
    }

    printf("Element not found\n");
}

/* Display */
void display()
{
    struct Node *temp;

    if (head == NULL)
    {
        printf("List is Empty\n");
        return;
    }

    temp = head;

    printf("Linked List: ");

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

/* Main Function */
int main()
{
    int choice, value, pos;

    while (1)
    {
        printf("\n----- Singly Linked List -----\n");
        printf("1. Insert Beginning\n");
        printf("2. Insert End\n");
        printf("3. Insert Position\n");
        printf("4. Delete Beginning\n");
        printf("5. Delete End\n");
        printf("6. Delete Position\n");
        printf("7. Search\n");
        printf("8. Display\n");
        printf("9. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter value: ");
                scanf("%d",&value);
                insertBegin(value);
                break;

            case 2:
                printf("Enter value: ");
                scanf("%d",&value);
                insertEnd(value);
                break;

            case 3:
                printf("Enter value and position: ");
                scanf("%d%d",&value,&pos);
                insertPos(value,pos);
                break;

            case 4:
                deleteBegin();
                break;

            case 5:
                deleteEnd();
                break;

            case 6:
                printf("Enter position: ");
                scanf("%d",&pos);
                deletePos(pos);
                break;

            case 7:
                printf("Enter value: ");
                scanf("%d",&value);
                search(value);
                break;

            case 8:
                display();
                break;

            case 9:
                exit(0);

            default:
                printf("Invalid Choice\n");
        }
    }

    
}