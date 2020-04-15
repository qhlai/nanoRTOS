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
typedef struct LIST_ITEM
{
    SYSTEMbit num;//count
    struct LIST_ITEM* next;
    struct LIST_ITEM* previous;
    void * OwnerCore;
    void * OwnerList;
    //u32 data[];
}LIST_ITEM;
//typedef struct LIST_ITEM LIST_ITEM;

typedef struct LIST_ITEM_Mini
{
    SYSTEMbit num;//count
    struct LIST_ITEM*next;
    struct LIST_ITEM*previous;
    //u32 data[];
}LIST_ITEM_Mini;

//typedef struct LIST_ITEM_Simplified LIST_ITEM_Simplified;

typedef struct LIST
{
    SYSTEMbit SumNode;
    LIST_ITEM *Index;//now
    LIST_ITEM *LastItem;//ͷ
} LIST;



#endif // THREAD_H
