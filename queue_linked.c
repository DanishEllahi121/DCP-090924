#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Queue
{
    struct Node *front, *rear;
};

// Initialize a new queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}

void enqueue(struct Queue *q, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (q->rear == NULL)
    {
        q->front = q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}

int dequeue(struct Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue Underflow\n");
        return -1;
    }

    struct Node *temp = q->front;
    int data = temp->data;
    q->front = q->front->next;

    if (q->front == NULL)
    {
        q->rear = NULL;
    }

    free(temp);
    return data;
}

void displayQueue(struct Queue *q)
{
    if (q->front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct Node *temp = q->front;
    printf("Queue elements: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Queue *queue = createQueue();
    int choice, value;

    while (1)
    {
        printf("\n1. Enqueue\n2. Dequeue\n3. Display Queue\n4. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to enqueue: ");
            scanf("%d", &value);
            enqueue(queue, value);
            break;
        case 2:
            value = dequeue(queue);
            if (value != -1)
            {
                printf("Dequeued: %d\n", value);
            }
            break;
        case 3:
            displayQueue(queue);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}
