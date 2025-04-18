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
// DELETE A NODE FROM IN BETWEEN
struct Node * deleteAtIndex(struct Node * head , int index){
    struct Node * p = head;
    struct Node * q = head -> next ;
   for( int i =0 ; i < index -1 ; i++){
    p = p -> next;
    q = q -> next;
   }
   p -> next = q -> next;
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

     head = deleteAtIndex(head , 2 );

     printf("linked list after deletion \n:");
     traversal (head);
      
     return 0;

}
