#include "AllLib.h"
void InitItem(LIST_ITEM* const root)
{
    root->OwnerList=NULL;
}

//void InitList(LIST* const root)
//{
//    root->Index=(LIST_ITEM*)&(root->LastItem);
//    root->LastItem.num=SysMAX;
//    root->LastItem.OwnerList =root;
//    root->LastItem.pervious=root->LastItem.next=(LIST_ITEM*)&(root->LastItem);
//    root->SumNode=(SYSTEMbit)0;
//}
