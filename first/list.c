#include "AllLib.h"
void InitItem(LIST_ITEM* const root)
{
    root->OwnerList=NULL;
}

void InitList(LIST* const root)
{
    //root->
    root->Index=(LIST_ITEM*)&(root->LastItem);

    root->LastItem->num=SysMAX;
    //root->LastItem->OwnerList =root;
    //root->LastItem->OwnerCore =NULL;
    root->LastItem->previous=(LIST_ITEM*)&(root->LastItem);
    root->LastItem->next=(LIST_ITEM*)&(root->LastItem);
    root->SumNode=(SYSTEMbit)0;
}

void InsertListEnd(LIST* const List,LIST_ITEM* const NewItem)
{
    NewItem->next=List->Index;
    NewItem->OwnerList=List;
    List->Index->previous=NewItem;
    List->Index->previous->next=(LIST*)&(List->Index);
    //List->LastItem->next=NewItem;
    //List->LastItem->previous=
    (List->SumNode)++;

}

void InsertList(LIST* const List,LIST_ITEM* const NewItem)//ÉýÐòÅÅÁÐ
{
    LIST_ITEM* InsertPlace;
    if(NewItem->num==SysMAX)
    {
        InsertPlace=List->LastItem->previous;
    }
    else
    {
        for(InsertPlace=(LIST_ITEM*)&(List->LastItem);(InsertPlace->next->num)<=(NewItem->num);(InsertPlace=InsertPlace->next));//±éÀú
    }
    NewItem->next=InsertPlace->next;
    NewItem->next->previous=NewItem;
    NewItem->previous=InsertPlace;
    InsertPlace->next=NewItem;

    NewItem->OwnerList=List;

    //List->LastItem->next=NewItem;
    //List->LastItem->previous=
    (List->SumNode)++;
}
