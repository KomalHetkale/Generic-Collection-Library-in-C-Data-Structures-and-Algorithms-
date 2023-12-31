#ifndef stack_h
#define stack_h

struct stack_node{
    void* data;
    struct stack_node *prev;
};

typedef struct{
    struct stack_node *top;
    unsigned int size;
    char *type;
}stack;

stack* stack_create(char*);
void stack_push(stack* , void*);
void* stack_pop(stack*);
void* stack_peek(stack*);
#endif