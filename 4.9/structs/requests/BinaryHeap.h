#ifndef BINARY_HEAP_H
#define BINARY_HEAP_H
typedef struct binary_heap_elem{
    int key;
    char* content;

}binary_heap_elem;

typedef struct binary_heap {
    //application** arr;
    int capacity;
    int size;
} binary_heap;

binary_heap* create_binary_heap();
void delete_binary_heap();
void swap();

#endif