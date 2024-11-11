#include <stdio.h>
#define MAXSIZE 10

void enqueue(int queue[], int *front, int *rear, int value);
int dequeue(int queue[], int *front, int *rear);
void displayQueue(int queue[], int front, int rear);

int main()
{
    int queue[MAXSIZE], front = -1, rear = -1, choice, value;
    printf("\n1.Enqueue \n2.Dequeue \n3.DisplayQueue \n4.Exit \nEnter Your choice \n");
    scanf("%d", &choice);
    while (1)
    {
        switch (choice)
        {
        case 1:
            printf("Enter the Value: ");
            scanf("%d", &value);
            enqueue(queue, &front, &rear, value);
            break;
        case 2:
            value = dequeue(queue, &front, &rear);
            if (value != -1)
            {
                printf("Dequeued value: %d\n", value);
            }
            break;
        case 3:
            displayQueue(queue, front, rear);
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Invalid choice! please enter again\n");
        }
    }
    return 0;
}
void enqueue(int queue[], int *front, int *rear, int value)
{
    // check if the queue is full
    if ((*rear + 1) % MAXSIZE == *front)
    {
        printf("The Queue is full\n");
        return 0;
    }
    // check if this is the first element being added
    if (*front == -1)
    {
        *front = 0;
    }
    // Move rear pointer and insert element
    *rear = (*rear + 1) % MAXSIZE;
    queue[*rear] = value;
    printf("Enqueued : %d\n");
}
int dequeue(int queue[], int *front, int *rear)
{
    // check if the queue is empty
    if (*front == -1)
    {
        printf("The Queue is Empty\n");
        return -1;
    }
    int value = (*front);
    // if queue has only one element reset front and rear
    if (*front == *rear)
    {
        *front == -1;
        *rear == -1;
    }
    else
    {
        // Move front to the next position
        *front = (*front + 1) % MAXSIZE;
    }
    return value;
}

void display(int queue[], int front, int rear)
{
    if (front == -1)
    {
        printf("Queue is Empty\n");
        return 0;
    }
    printf("Queue Elements: ");
    int i = front;
    while (1)
    {
        printf("%d", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAXSIZE;
    }
    printf("\n");
}