#include <stdio.h>
#include <stdlib.h>

// Define the structure of a node
struct Node
{
    int data;
    struct Node *next;
};

// Function prototypes
void insertAtBeginning(struct Node **head, int data);
void insertAtEnd(struct Node **head, int data);
void insertBefore(struct Node **head, int target, int data);
void insertAfter(struct Node *head, int target, int data);
void printList(struct Node *head);

int main()
{
    struct Node *head = NULL;
    int choice, data, target;

    while (1)
    {
        printf("\nChoose an option:\n");
        printf("1. Insert at Beginning\n");
        printf("2. Insert at End\n");
        printf("3. Insert Before a Node\n");
        printf("4. Insert After a Node\n");
        printf("5. Display List\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data to insert at the beginning: ");
            scanf("%d", &data);
            insertAtBeginning(&head, data);
            break;

        case 2:
            printf("Enter data to insert at the end: ");
            scanf("%d", &data);
            insertAtEnd(&head, data);
            break;

        case 3:
            printf("Enter the target node value before which to insert: ");
            scanf("%d", &target);
            printf("Enter data to insert before %d: ", target);
            scanf("%d", &data);
            insertBefore(&head, target, data);
            break;

        case 4:
            printf("Enter the target node value after which to insert: ");
            scanf("%d", &target);
            printf("Enter data to insert after %d: ", target);
            scanf("%d", &data);
            insertAfter(head, target, data);
            break;

        case 5:
            printf("Linked List: ");
            printList(head);
            break;

        case 6:
            printf("Exiting...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
}

// Function to insert a node at the beginning
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to insert a node at the end
void insertAtEnd(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head;
    newNode->data = data;
    newNode->next = NULL;

    if (*head == NULL)
    {
        *head = newNode;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to insert a node before a given node
void insertBefore(struct Node **head, int target, int data)
{
    if (*head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    // If the target node is the head node
    if ((*head)->data == target)
    {
        insertAtBeginning(head, data);
        return;
    }

    struct Node *temp = *head;
    while (temp->next != NULL && temp->next->data != target)
    {
        temp = temp->next;
    }

    // If target is found, insert before it
    if (temp->next != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        printf("Target node not found.\n");
    }
}

// Function to insert a node after a given node
void insertAfter(struct Node *head, int target, int data)
{
    if (head == NULL)
    {
        printf("The list is empty.\n");
        return;
    }

    struct Node *temp = head;
    while (temp != NULL && temp->data != target)
    {
        temp = temp->next;
    }

    // If target is found, insert after it
    if (temp != NULL)
    {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    else
    {
        printf("Target node not found.\n");
    }
}

// Function to print the list
void printList(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
