#include <stdio.h>

int a[10];
int top = -1;

// Push function
void push() {
    int value;
    if (top == 9) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter value: ");
        scanf("%d", &value);
        top++;
        a[top] = value;
    }
}

// Pop function
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", a[top]);
        top--;
    }
}

int main() {
    int choice;

    printf("1. Push  2. Pop\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
        push();
    else if (choice == 2)
        pop();
    else
        printf("Invalid choice\n");

    return 0;
}
