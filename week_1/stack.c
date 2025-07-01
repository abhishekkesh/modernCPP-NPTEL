#include<stdio.h>

typedef struct stack{
    int data[100];
    int top;
} stack;

int empty(stack *p){
    return (p->top==-1);
}
void push(stack *p,int x){
    p->data[++(p->top)]=x;
}

void pop(stack *p){
    if(!empty(p)) (p->top)=(p->top)-1;
}

int main(){
    stack st;
    st.top = -1;
    push(&st,10);
    push(&st,20);
    push(&st,40);
    push(&st,30);
    push(&st,70);
    pop(&st);
    while(st.top!=-1){
        printf("%d ", st.data[st.top]);
        pop(&st);
    }
    printf("\n");
    return 0;
}
