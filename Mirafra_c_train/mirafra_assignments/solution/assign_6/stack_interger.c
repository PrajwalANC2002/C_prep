#include <stdio.h>
#include <stdlib.h>
#define MAX_Length 10
int stack[MAX_Length];
int top = -1;
void push(int item);
int pop();
void print_stack();
int is_full();
int is_empty();
int main() {
    int choice, item;
    while (1) {
        printf("\n---------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Check if Full\n");
        printf("5. Check if Empty\n");
        printf("6. Exit\n");
        printf("---------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(item);
                break;
 
            case 2:
                pop();
                break;
 
            case 3:
                print_stack();
                break;
 
            case 4:
                is_full();
                break;
 
            case 5:
                is_empty();
                break;
 
            case 6:
                exit(0);
 
            default:
                printf("Invalid choice! Please enter a valid option.\n");
        }
    }
    return 0;
}
void push(int item) {
    if (is_full()) {
        printf("Stack overflow\n");
        return;
    } else {
        top++;
        stack[top] = item;
        printf("Element %d pushed successfully.\n", item);
    }
}
int pop() {
    if (is_empty()) {
        printf("Stack underflow\n");
        return -1;
    } else {
        int item = stack[top];
        top--;
        printf("Popped element: %d\n", item);
        return item;
    }
}
void print_stack() {
    printf("Stack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}
int is_full() {
    if(top == MAX_Length - 1){
      printf("Its Full\n");
      return 1;
    }
 
    else{
      printf("Its not Full\n");
      return 0;
    }
}
int is_empty() {
    if(top == -1){
      printf("Its Empty\n");
      return 1;
    }
    else{
      printf("Its not Empty\n");
      return 0;
    }
}
