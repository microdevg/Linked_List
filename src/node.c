#include "node.h"

list_t *create_list()
{
    list_t *list = (list_t *)malloc(sizeof(list_t));
    if (list == NULL)
        return NULL;
    list->init = NULL;
    list->size = 0;
    return list;
}


#define CREATE_NODE(pnode, pcontent, len) do {  \
    pnode = (node_t*)malloc(sizeof(node_t));    \
    if (pnode == NULL) {                        \
        fprintf(stderr, "Memory allocation failed\n"); \
        exit(EXIT_FAILURE);                     \
    }                                           \
    pnode->obj = (TYPE)malloc(len);             \
    if (pnode->obj == NULL) {                   \
        free(pnode);                            \
        fprintf(stderr, "Memory allocation failed\n"); \
        exit(EXIT_FAILURE);                     \
    }                                           \
    memcpy(pnode->obj, pcontent, len);          \
    pnode->next = NULL;                         \
    pnode->before = NULL;                       \  
} while (0)

#define DELETE_NODE(pnode) do {                 \
    if (pnode != NULL) {                        \
        free(pnode->obj);                       \
        free(pnode);                            \
        pnode = NULL;                           \
    }                                           \
} while (0)

#define FIND_LAST_NODE(pnode, last_node) do {   \
    last_node = pnode;                          \
    if (last_node != NULL) {                    \
        while (last_node->next != NULL) {       \
            last_node = last_node->next;        \
        }                                       \
    }                                           \
} while (0)




int append(list_t *list, TYPE element, size_t len)
{
    // Check list
    if(list == NULL)return -1;
    node_t* pnode = NULL;
    CREATE_NODE(pnode,element,len);
    if(list->init == NULL ){   
        list->init = pnode;
        list->size = 1;
    }
    else{
        node_t* last = NULL;
        FIND_LAST_NODE(list->init,last);
        pnode->before = last;
        last->next = pnode;
        list->size = list->size + 1;
    }
   return list->size;
}

TYPE remove_last(list_t *list)
{
    if(list == NULL) return NULL;
    TYPE ret;
    node_t* last = NULL;
    FIND_LAST_NODE(list->init,last);
    ret = last->obj;
    if(last->before != NULL){
        node_t* pbefore = last->before;
        pbefore->next = NULL;
    }
    list->size = list->size - 1;
    return ret;
}