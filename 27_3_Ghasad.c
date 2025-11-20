#include <stdio.h>
#define SIZE 10

int arr[SIZE];
int top1 = -1;         // Top of Stack 1
int top2 = SIZE;       // Top of Stack 2

// Push in Stack 1
void push1(int value) {
    if (top1 + 1 == top2) {
        printf("Overflow! No space.\n");
        return;
    }
    top1++;
    arr[top1] = value;
    printf("%d pushed in Stack 1\n", value);
}

// Push in Stack 2
void push2(int value) {
    if (top2 - 1 == top1) {
        printf("Overflow! No space.\n");
        return;
    }
    top2--;
    arr[top2] = value;
    printf("%d pushed in Stack 2\n", value);
}

// Pop from Stack 1
void pop1() {
    if (top1 == -1) {
        printf("Stack 1 Underflow!\n");
        return;
    }
    printf("%d popped from Stack 1\n", arr[top1]);
    top1--;
}

// Pop from Stack 2
void pop2() {
    if (top2 == SIZE) {
        printf("Stack 2 Underflow!\n");
        return;
    }
    printf("%d popped from Stack 2\n", arr[top2]);
    top2++;
}

int main() {
    push1(10);
    push1(20);
    push2(30);
    push2(40);

    pop1();
    pop2();

    return 0;
}
