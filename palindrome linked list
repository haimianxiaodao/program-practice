/*************************
Given a singly linked list, determine if it is a palindrome.

Follow up: 
Could you do it in O(n) time and O(1) space?

Subscribe to see which companies asked this question 
*************************/ 


class Solution
{
public:
    bool isPalindrome(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return true;
        if(head->next->next==NULL)
        {
            if(head->val==head->next->val)
                return true;
            else return false;
        }
        else
        {
            ListNode* temp=new ListNode(0);
            temp->next=head;
            ListNode* temp1111=head;
            vector coun;
            while(temp->next)
            {
                coun.push_back(temp1111->val);
                temp1111=temp1111->next;
                temp=temp->next;
            }
            int sum=coun.size();
            int j=0;
            for(; j<(sum+1)/2; j++)
            {
                if(coun[j]==coun[sum-1-j])
                    continue;
                return false;
            }
            return true;
        }
