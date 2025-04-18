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

  struct Node* insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr -> data = data ;
    struct Node * p = head;
    while ( p-> next != NULL){
        p = p -> next;
    }
    p -> next = ptr;
    ptr-> next = NULL;
       return head;
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
printf("Linked LIst Before Insertion\n :");
    LinkedListTraversal( head);
   head = insertAtEnd(head , 56 );
   printf("Linked LIst After Insertion\n :");
   LinkedListTraversal( head);

    return 0;
}
