#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node * next;
};

void traversal(struct Node* ptr){
    while( ptr != NULL){
        printf("Element: %d \n", ptr -> data);
         ptr = ptr -> next;
    }
}
 
int isEmpty(struct Node * top){
    if(top== NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node * top){
    struct Node * p = (struct Node *)malloc(sizeof (struct Node));
    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node * push(struct Node *top , int val){
    if(isFull(top)){
        printf("Stack overflow ! cannot push %d into the stack", val);
    }
    else{
        struct Node *n = (struct Node*)malloc(sizeof(struct Node));
        n-> data = val ;
        n-> next = top;
        top = n;
        return top;
    }
}

int main()
{
    struct Node * top = NULL;
    top = push(top, 56);
    top = push(top, 5);
    top = push(top, 67);

    traversal(top);
    return 0;   
}
