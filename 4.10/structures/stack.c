#include "stack.h"

int is_empty(Stack* stack){
    return stack->top == NULL;
}

void create_stack(Stack* stack){
    stack->top = NULL;
}

status_code push(Stack* stack, void* value, size_t data_size){
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        return BAD_ALOC;
    }
    newNode->data = malloc(data_size);
    if (newNode->data == NULL) {
        free(newNode);
        return BAD_ALOC;
    }
    memcpy(newNode->data, value, data_size);
    newNode->next = stack->top;
    stack->top = newNode;
    return OK;
}


status_code pop(Stack* stack) {
    if (is_empty(stack)) {
        return NULL;
    }

    Node* temp = stack->top;
    void* data = temp->data;
    stack->top = temp->next;
    free(temp);
    return data;
}