#include <stdio.h>
#include <stdlib.h>

#define MAX 10
void enqueue(int, int queue[], int *front, int *rear);
int dequeue(int queue[], int *rear, int *front);
void displayQueue(int queue[], int front, int rear);

int main()
{
    int queue[MAX], value;
    int front = -1, rear = -1;

    printf("\nQueue Operations:\n");
    enqueue(100, queue, &front, &rear);
    enqueue(200, queue, &front, &rear);
    enqueue(300, queue, &front, &rear);
    displayQueue(queue, front, rear);
    dequeue(queue, &front, &rear);
    displayQueue(queue, front, rear);

    return 0;
}
void enqueue(int value, int queue[MAX], int *front, int *rear)
{
    if (*rear == MAX - 1)
    {
        printf("Queue overflow\n");
    }
    else
    {
        if (*front == -1)
            *front = 0;
    }
    queue[++(*rear)] = value;
    printf("%d enqueued to Queue\n", value);
}
int dequeue(int queue[], int *rear, int *front)
{
    if (*front == -1 || front > rear)
    {
        printf("Queue underflow\n");
        return -1;
    }
    else
    {
        int value = queue[*front++];
        printf("%d dequeued from the Queue\n", value);
        return value;
    }
}
void displayQueue(int queue[], int front, int rear)
{
    if (front == -1 || front > rear)
    {
        printf("\nQueue is Empty");
    }
    else
    {
        printf("\nQueue Elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}