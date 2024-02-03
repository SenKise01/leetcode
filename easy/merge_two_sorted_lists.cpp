#include"merge_two_sorted_lists.h"


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode* resultListHead = nullptr;


    // Select the head of result list
    if(list1 == nullptr && list2 != nullptr)
    {
        resultListHead = list2;
        list2 = list2->next;
    }
    else if(list1 != nullptr && list2 == nullptr)
    {
        resultListHead = list1;
        list1 = list1->next;
    }
    else if(list1 != nullptr && list2 != nullptr)
    {
        if(list1->val <= list2->val)
        {
            resultListHead = list1;
            list1 = list1->next;
        }
        else
        {
            resultListHead = list2;
            list2 = list2->next;
        }
    }

    ListNode* resultList = resultListHead;
    while(list1 != nullptr || list2 != nullptr)
    {
        if((list1 != nullptr) && ((list2 == nullptr) || (list1->val <= list2->val)))
        {
            resultList->next = list1;
            list1 = list1->next;
        }
        else if((list2 != nullptr) && ((list1 == nullptr)  ||(list1->val > list2->val)))
        {
            resultList->next = list2;
            list2 = list2->next;
        }
        resultList = resultList->next;
    }

    return resultListHead;
}