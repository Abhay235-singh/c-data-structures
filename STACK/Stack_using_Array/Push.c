#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct Stack * ptr){
    if(ptr -> top == -1){
        return 1;
    }
    else {
        return 0;
    }
}
 
int isFull ( struct Stack * ptr){
    if(ptr -> top == ptr ->size -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// Push operation
void push(struct Stack * ptr , int value){
if( isFull(ptr)){
    printf(" Stack Overflow! Cannot push %d to the stack\n", value);
}
else{
    ptr -> top ++;
    ptr -> arr[ptr -> top ] = value;
}
}

int main(){
    struct Stack * sp = (struct Stack  *) malloc(sizeof(struct Stack));
    sp -> size = 10;
    sp -> top = -1;
    sp -> arr = (int *) malloc(sp -> size * sizeof(int));
    printf("Stack has been created successfully \n");

    printf("Before pushing , Full : %d \n", isFull(sp));
    printf("Before pushing , Empty : %d \n" , isEmpty(sp));

    push(sp , 34);
    push(sp , 56);
    push(sp , 78);
    push(sp , 1);
    push(sp , 44);
    push(sp , 74);
    push(sp , 94);
    push(sp , 14);
    push(sp , 42);
    push(sp , 54);
    push(sp , 9);
    printf("After  pushing , Full : %d \n", isFull(sp));
    printf("After  pushing , Empty : %d \n" , isEmpty(sp));

    return 0;
}
