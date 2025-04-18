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
// DELETE FROM END 
struct Node * deletefromEnd (struct Node * head){
    struct Node * p = head;
    struct Node * q = head -> next ;
   while( q -> next != NULL){
    p = p -> next;
    q = q -> next;
   }
   p -> next = NULL;
   free(q);
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

     printf("Linked list before deletion \n :");
     traversal (head);

     head = deletefromEnd(head);

     printf("linked list after deletion \n:");
     traversal (head);
      
     return 0;

}
