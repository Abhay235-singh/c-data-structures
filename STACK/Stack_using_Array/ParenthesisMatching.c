 #include<stdio.h>
 #include<stdlib.h>

 struct stack {
    int size;
    int top;
    char *arr;
 };

 int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    else {
        return 0;
    }
 }

 int isFull(struct stack * ptr){
    if(ptr-> top == ptr ->size-1){
        return 1;
    }
    else{
        return 0;
    }
 }

 void push(struct stack *ptr , int val){
    if(isFull(ptr)){
    printf("stack overflow! \n");
 }
 else{
    ptr-> top++;
    ptr-> arr[ptr->top] = val;
 }
}

int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
        return -1;
    }
    else{
        char val = ptr ->arr[ptr-> top];
        ptr -> top--;
        return val;
    }
}

int parenthesis_Matching(char * exp){
    int i;

    struct stack * sp = ( struct stack*)malloc(sizeof(struct stack));
    sp -> size = 100;
    sp -> top = -1;
    sp -> arr = (char*)malloc( sp -> size * sizeof(char));

    for(int i=0 ; exp[i] != '\0'; i++){
        if(exp[i]== '('){
            push(sp,'(');

        }
        else if (exp[i] == ')'){
            if (isEmpty(sp)){
                return 0;
            }
            pop(sp);
        }
    }
    
    if(isEmpty(sp)){
        return 1; 
    }
    else {
        return 0;
    }
}

int main(){
    char * exp = " 8*(9)";

    if(parenthesis_Matching(exp))
    {
        printf("The parenthesis is Matched");
    }
    else{
        printf("Parenthesis is not Matched");
    }
    return 0;
}
