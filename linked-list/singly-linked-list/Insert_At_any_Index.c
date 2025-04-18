#include<stdio.h>
#include<stdlib.h>
  struct Node {
    int data;
    struct Node * next;
  };
   void traversal(struct Node * ptr){
    while( ptr != NULL){
        printf("Element: %d\n", ptr -> data);
      ptr =  ptr -> next;
    }
   }
    struct Node * insertatindex(struct Node *head , int data , int Index){
        struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
        struct Node * p =head;
        int i=0;
        
        while(i != Index-1){
         p =    p -> next;
            i++;
        }
        ptr -> data =data;
        ptr -> next = p -> next;
        p -> next = ptr;
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
    
        traversal( head);
       head = insertatindex(head , 56 , 2);
       traversal( head);
    
        return 0;
    }
