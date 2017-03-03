/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n)
{
    if(!head || !head->next ||m==n) return head;
    ListNode *p=head;
    ListNode *q=head;
    ListNode *pm;
    ListNode *pn;
    ListNode *pmp;
    ListNode *pnp;

      if(!head->next->next)
        {
            ListNode *second=head->next;
            second->next=head;
            head->next=nullptr;
            return second;

        }
        else
          if(1==m && 2==n)
        {
            ListNode *seconds=head->next;
            ListNode *third=head->next->next;
            seconds->next=head;
            head->next=third;
            return seconds;
        }
        else

    if(1==m)
    {
        int j=0;
        ListNode *pnp1;
        ListNode *pm1=head;
        ListNode *pn1;
        ListNode *p1=head;
        while(p1)
        {
            if(j==n-2)
            {
                pnp1=p1;
                pn1=p1->next;
                break;
            }
            else ;
            p1=p1->next;
            j++;
        }
        ListNode *temp1=pm1->next;
        pm1->next=pn1->next;
        pn1->next=temp1;
        if(pnp1==temp1)
        {
            pnp1->next=pm1;
            return pn1;
        }
        else
        {
            pnp1->next=pm1;
            return pn1;
        }
    }
    else
    {
        int i=0;
        while(p)
        {
            if(i==m-2)
            {
                pmp=p;
                pm=p->next;
            }
            else if(i==n-2)
            {
                pnp=p;
                pn=p->next;
                break;
            }
            else ;
            p=p->next;
            i++;
        }//i 就是链表的长度
        pmp->next=pn;
        ListNode *temp=pm->next;
        pm->next=pn->next;
        if(temp==pn)
        {
            pn->next=pm;
            return head;
        }
        else
        {
            pn->next=temp;
            pnp->next=pm;
        }
        return head;
    }
}
};
