#include <stdio.h>
#include "node.h"



int main(void){
    
   list_t* list = create_list();


    char p1[]  = "Hello world\n";
    char p2[] = "This is a second line \n";
    char p3[] = "This is a thierd line \n";


    append(list,p1,strlen(p1)+1);
    printf("List size:%d\n",list->size);
    append(list,p2,strlen(p2)+1);
    printf("List size:%d\n",list->size);
    append(list,p3,strlen(p3)+1);


    printf("List size:%d\n",list->size);

    node_t *p;
    
    p = list->init;

    printf("[print]%s\n",p->obj);

    p = p->next;

    printf("[print]%s\n",p->obj);
    
    p = p->next;

    printf("[print]%s\n",p->obj);

    printf("List size:%d\n",list->size);

    char* str = remove_last(list);
    printf("Remove:%s\n",str);
    printf("List size:%d\n",list->size);
    str = remove_last(list);
    printf("Remove:%s\n",str);
    printf("List size:%d\n",list->size);

    str = remove_last(list);
    printf("Remove:%s\n",str);
    printf("List size:%d\n",list->size);



    return 0;
}