/********************************
Sort a linked list using insertion sort. 
链表的插入排序 
********************************/ 
/** 
* Definition for singly-linked list. 
* struct ListNode { 
* int val; 
* ListNode *next; 
* ListNode(int x) : val(x), next(NULL) {} 
* }; 
*/
class Solution
{
public:
    ListNode* insertionSortList(ListNode* head)
    {
        if(head==NULL || head->next==NULL) return head;
        ListNode* new_head = new ListNode(0);
        ListNode* temp;
        ListNode* cur;
        new_head->next=head;
        temp=new_head;
        cur=head;
        while(cur)
        {
            if(cur->next && cur->next->valval)
            {
                while(temp->next && temp->next->val < cur->next->val)
                    temp=temp->next;
                ListNode* temptemp = temp -> next;
                temp->next=cur->next;
                cur->next=cur->next->next;
                temp->next->next=temptemp;
                temp=new_head;
            }
            else
                cur=cur->next;
        }
        return new_head->next;
    }
}
