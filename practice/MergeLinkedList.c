#include <stdio.h>

//  Definition for singly-linked list.
struct ListNode
{
    int val;
    struct ListNode *next;
};

struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2)
{
    struct ListNode *mergeList = (struct ListNode*)malloc(sizeof(struct ListNode));
    while (list1 != NULL && list2 != NULL)
    {
        mergeList->val = list1->val;
        mergeList->next = list2;
    }
    

}
int main()
{

    return 0;
}