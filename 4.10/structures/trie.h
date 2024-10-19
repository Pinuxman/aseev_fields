#ifndef INC_4_10_TRIE_H
#define INC_4_10_TRIE_H

#include "../utils.h"

#define ALPHABET_SIZE 63
#define MAX_SIZE 100

typedef struct TreeNode {
    struct TreeNode **children;
    bool isEndOfkey;
    uint32_t value;
} TreeNode;

TreeNode* get_node();
void insert(TreeNode *root, const char *key, const uint32_t value);
TreeNode* search(TreeNode *root, const char *key);

#endif //INC_4_10_TRIE_H
