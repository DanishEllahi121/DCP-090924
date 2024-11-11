#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void push(struct Node **top, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (!newNode)
    {
        printf("Heap overflow\n");
        return;
    }
    newNode->data = data;
    newNode->next = *top;
    *top = newNode;
}

int pop(struct Node **top)
{
    if (*top == NULL)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    struct Node *temp = *top;
    *top = (*top)->next;
    int popped = temp->data;
    free(temp);
    return popped;
}

void displayStack(struct Node *top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }
    struct Node *temp = top;
    printf("Stack elements: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *stack = NULL;
    int choice, value;

    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Display Stack\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&stack, value);
            break;
        case 2:
            value = pop(&stack);
            if (value != -1)
            {
                printf("Popped: %d\n", value);
            }
            break;
        case 3:
            displayStack(stack);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}
