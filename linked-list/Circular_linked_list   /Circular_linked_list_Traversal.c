#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};
// Circular Linked List Traversal
void traversal(struct Node * head)
{
    struct Node * ptr = head;
    do{
    printf("Element is %d \n", ptr -> data);
    ptr = ptr -> next;
    }while(ptr != head);
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

    head -> data = 4;
    head -> next = second;

    second -> data = 3;
     second -> next = third;

     third -> data = 6;
     third -> next = forth;

     forth -> data = 1;
     forth -> next = head;

     
     traversal (head); 
     return 0;

}
