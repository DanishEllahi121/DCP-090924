#include <stdio.h>
#include <stdlib.h>

// define a node structure
struct Node
{
    int data;
    struct Node *list;
};

// function to create a new node
struct Node* CreateNode(int data){
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data;
    newNode->list;
    return newNode;
}

// function to add insert the node at the end
void insertAtEnd(struct Node** head, int data)
{
    struct Node* newNode = CreateNode(data);
    if(*head = NULL){
        *head = newNode;
        return;
    }
    struct Node* current = *head;
    while(current-> list != NULL){
        current = current->list;
    }
    current->list = newNode;
}

//fuction to display the linked list
void displaylist(struct Node* head){
    struct Node* current = head;
    while (current != NULL){
        printf("%d -> ",current->data);
        current = current->list;
    }
    printf("NUll\n");
}
int main()
{
    struct Node *head, *Current;
    head = malloc(sizeof(struct Node));
    Current = malloc(sizeof(struct Node));

    head->data = 45;
    head->list = NULL;

    Current->data = 54;
    Current->list = NULL;

    head->list = Current;

    printf("%d\n", head->data);
    printf("%d\n", Current->data);

    return 0;
}