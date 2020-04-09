#ifndef LIST_H
#define LIST_H
#include "AllLib.h"
struct node
{
    struct node*next;
    char num;
    u8 arry[];
};
struct node1
{
    struct node*next;
    struct node*previous;
    char num;
    u8 arry[];
};
struct LIST_ITEM
{
    SYSTEMbit num;//count
    struct xLIST_ITEM*next;
    struct xLIST_ITEM*pervious;
    void * OwnerCore;
    void * OwnerList;
    u32 data[];
};
struct LIST_ITEM_Simplified
{
    SYSTEMbit num;//count
    struct xLIST_ITEM*next;
    struct xLIST_ITEM*pervious;
    //u32 data[];
};
typedef struct LIST
{
    SYSTEMbit SumNode;
    LIST_ITEM *Index;//now
    LIST_ITEM *LastItem;
}



#endif // THREAD_H
