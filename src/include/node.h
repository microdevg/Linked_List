#ifndef NODE_H
#define NODE_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>




#define TYPE            char*



typedef struct node_t{
    struct node_t* before;
    struct node_t* next;
    TYPE obj;
}node_t;


typedef struct list_t{
    node_t* init;
    size_t size;
} list_t;





list_t* create_list();



/**
 * @brief Add element in the last place.
 * 
 * @param list 
 * @param element 
 * @param len 
 * @return int 
 */
int append(list_t* list,TYPE element,size_t len);

TYPE remove_last(list_t* list);

TYPE remove_element(list_t* list);

#endif // !NODE_H


