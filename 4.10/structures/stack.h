
#ifndef INC_4_10_STACK_H
#define INC_4_10_STACK_H
#include "../utils.h"
typedef struct Node {
    void* data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
} Stack;

int is_empty(Stack* stack);
void create_stack(Stack* stack);
status_code push(Stack* stack, void* value, size_t data_size);
status_code pop(Stack* stack);

#endif //INC_4_10_STACK_H
