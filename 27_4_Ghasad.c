#include <stdio.h>
#define SIZE 10

int arr[SIZE];

// Queue 1 pointers
int front1 = -1, rear1 = -1;

// Queue 2 pointers
int front2 = SIZE, rear2 = SIZE;

// Enqueue in Queue 1
void enqueue1(int value) {
    if (rear1 + 1 == rear2) {
        printf("Overflow! No space for Queue 1.\n");
        return;
    }
    if (front1 == -1) front1 = 0;
    rear1++;
    arr[rear1] = value;
    printf("%d inserted in Queue 1\n", value);
}

// Enqueue in Queue 2
void enqueue2(int value) {
    if (rear2 - 1 == rear1) {
        printf("Overflow! No space for Queue 2.\n");
        return;
    }
    if (front2 == SIZE) front2 = SIZE - 1;
    rear2--;
    arr[rear2] = value;
    printf("%d inserted in Queue 2\n", value);
}

// Dequeue from Queue 1
void dequeue1() {
    if (front1 == -1 || front1 > rear1) {
        printf("Queue 1 Underflow!\n");
        return;
    }
    printf("%d removed from Queue 1\n", arr[front1]);
    front1++;
}

// Dequeue from Queue 2
void dequeue2() {
    if (front2 == SIZE || front2 < rear2) {
        printf("Queue 2 Underflow!\n");
        return;
    }
    printf("%d removed from Queue 2\n", arr[front2]);
    front2--;
}

int main() {
    enqueue1(10);
    enqueue1(20);
    enqueue2(30);
    enqueue2(40);

    dequeue1();
    dequeue2();

    return 0;
}
