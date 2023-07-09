#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void enQueue();
void deQueue();
void display();

int items[SIZE], front = -1, rear = -1;

int main() {
   int choice;

    while (1)
    {
        printf("\nPerform operations on the queue:");
        printf("\n1.enQueue the element\n2.dequeue the element\n3.display\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            enQueue();
            break;
        case 2:
            deQueue();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
}

void enQueue() {
    int x;
  if (rear == SIZE - 1)
    printf("\nQueue is Full!!");
  else {
    printf("\nEnter the element to be added onto the queue: ");
        scanf("%d", &x);
    if (front == -1)
      front = 0;
    rear++;
    items[rear] = x;
    printf("\nInserted -> %d", x);
  }
}

void deQueue() {
  if (front == -1)
    printf("\nQueue is Empty!!");
  else {
    printf("\nDeleted : %d", items[front]);
    front++;
    if (front > rear)
      front = rear = -1;
  }
}

// Function to print the queue
void display() {
  if (rear == -1)
    printf("\nQueue is Empty!!!");
  else {
    int i;
    printf("\nQueue elements are:\n");
    for (i = front; i <= rear; i++)
      printf("%d  ", items[i]);
  }
  printf("\n");
}
