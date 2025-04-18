#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};

void LinkedListTraversal(struct Node * ptr)
{
    while (ptr != NULL)
    {
        printf("Elements: %d\n", ptr->data);
        ptr = ptr ->next;
    }
}

int main (){
    struct Node* head;
    struct Node* second;
    struct Node* third;

    head = (struct Node*) malloc(sizeof(struct Node));
    second = (struct Node*) malloc(sizeof (struct Node));
    third =(struct Node*) malloc(sizeof(struct Node));

    // Linking first and second node
    head -> data = 77;
    head -> next = second;

    //LInking second and third node
    second -> data = 88;
    second -> next = third;

    //Terminating the list at the 3rd node
    third -> data =66;
    third -> next = NULL;

    LinkedListTraversal( head);

    return 0;
}
