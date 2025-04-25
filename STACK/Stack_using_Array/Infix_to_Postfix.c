#include<stdio.h>
#include<stdlib.h>

struct Stack{
    int size;
    int top;
    int *arr;
};

int stackTop(struct stack * sp){
    return sp -> arr[sp -> top];
}

int isEmpty(struct Stack * ptr){
    if(ptr -> top ==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Stack * ptr){
    if(ptr -> top == ptr -> size -1){
        return 1;
    }
    else{
        return 0;
    }
}

void push(struct Stack * ptr , int value)
{
    if( isFull(ptr)){
        printf(" Stack Overflow! Cannot push %d to the stack\n", value);
    }
    else{
        ptr -> top ++;
        ptr -> arr[ptr -> top ] = value;
    }
}

    int pop(struct Stack * ptr){
        if(isEmpty(ptr)){
            printf("Stack underflow! Cannot push from the stack \n");
            return -1;
        }
        else{
            int val = ptr -> arr[ptr -> top];
            ptr -> top--;
            return val;
        }
    }
