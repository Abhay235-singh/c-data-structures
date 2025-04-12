#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void traversal(struct Node * ptr)
{
    while(ptr != NULL){
        printf("Element: %d \n ", ptr -> data);
        ptr = ptr -> next;
    }
}
// DELETE FROM FIRST
struct Node * deleteAtFirst(struct Node * head){
    struct Node * ptr = head;
    head = head -> next;
    free(ptr);
    return head ;
}
int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;

    head = (struct Node *) malloc(sizeof (struct Node));
    second = (struct Node *) malloc(sizeof (struct Node));
    third = (struct Node *) malloc(sizeof (struct Node));
    forth= (struct Node *) malloc(sizeof (struct Node));

    head -> data = 3;
    head -> next = second;

    second -> data = 5;
     second -> next = third;

     third -> data = 6;
     third -> next = forth;

     forth -> data = 46;
     forth -> next = NULL;

     printf("Linked list before deletion :");
     traversal (head);

     head = deleteAtFirst(head);

     printf("linked list after deletion :");
     traversal (head);
      
     return 0;

}
