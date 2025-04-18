#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the doubly linked list
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a new node
struct Node* ptr(int data) {
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    p->data = data;
    p->next = p->prev = NULL;
    return p;
}

// Function to insert a node at the end of the list
void append(struct Node** head, int data) {
    struct Node* p = ptr(data);
    struct Node* last = *head;
    
    if (*head == NULL) {
        *head = p;
        return;
    }
    
    while (last->next != NULL) {
        last = last->next;
    }
    
    last->next = p;
    p->prev = last;
}

// Function to traverse the list in forward direction
void traverseForward(struct Node* head) {
    struct Node* temp = head;
    printf("Forward Traversal: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        if (temp->next == NULL) {  // Stop at the last node for reverse traversal
            break;
        }
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to traverse the list in reverse direction from the last node
void traverseBackward(struct Node* last) {
    printf("Backward Traversal: ");
    while (last != NULL) {
        printf("%d -> ", last->data);
        last = last->prev;
    }
    printf("NULL\n");
}

// Function to get the last node (for reverse traversal)
struct Node* getLastNode(struct Node* head) {
    struct Node* temp = head;
    while (temp && temp->next != NULL) {
        temp = temp->next;
    }
    return temp;
}

// Main function
int main() {
    struct Node* head = NULL;

    // Insert nodes into the list
    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    // Traverse in forward direction
    traverseForward(head);

    // Get the last node and traverse in reverse direction
    struct Node* last = getLastNode(head);
    traverseBackward(last);

    return 0;
}





