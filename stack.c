#include <stdio.h>
#define MAXSIZE 10
void push(int[], int *, int);
int pop(int[], int *);
void print_stack(int[], int);

int main()
{
    int stack[MAXSIZE], tos = -1, value, choice;

    while (1)
    {
        printf("\n1. Push\n2. Pop\n3. Print Stack\n4. Stack Calculation\n 5.Exit\n Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(stack, &tos, value);
            break;
        case 2:
            value = pop(stack, &tos);
            if (tos != -1) // check if the stack was not empty
            {
                printf("Popped value: %d\n", value);
            }
            break;
        case 3:
            print_stack(stack, tos);
        case 4:
            
            return 0;
        default:
            printf("Invalid choice\n");
        }
    }
}

void push(int stack[], int *tos, int value)
{
    if (*tos == MAXSIZE - 1)
    {
        printf("Stack is full\n");
    }
    else
    {
        stack[++(*tos)] = value;
        printf("Pushed value: %d\n", value);
    }
}

int pop(int stack[], int *tos)
{
    if (*tos == -1)
    {
        printf("The stack is empty\n");
        return -1; // Return a sentinel value to indicate an error
    }
    else
    {
        return stack[(*tos)--];
    }
}

void print_stack(int stack[], int tos)
{
    if (tos == -1)
    {
        printf("The stack is empty\n");
    }
    else
    {
        printf("Stack contents: ");
        for (int i = 0; i <= tos; i++)
        {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}