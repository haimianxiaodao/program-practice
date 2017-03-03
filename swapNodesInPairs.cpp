/***************************
Given a linked list, swap every two adjacent nodes and return its head.

For example, 
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed. 
***************************/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class linkedlist
{
public:
    linkedlist(): head(nullptr) {};
    ~linkedlist();
    void inserts(int val);
    ListNode* swapPairs(ListNode* head);
    void prints();
//private:

    ListNode *head;

};


void linkedlist::prints()
{
    if(head==nullptr)
    {
        cout<<"The Linkedlist is empty"<<endl;
        return ;
    }
    cout<<head->val;
    ListNode * heads=head->next;

    while(heads)
    {
        cout<<"  ->  "<<heads->val;
        heads=heads->next;
    }
    cout<<endl;
}


ListNode* linkedlist::swapPairs(ListNode* head)
{
    if(!head || !head->next) return head;

    ListNode* temp;
    ListNode* new_head;

    //change num1 & num2
    ListNode* p1=head;
    ListNode* p2=head->next;
    p1->next=p2->next;
    p2->next=p1;
    head=p2;

    ListNode* p=head->next;

    while(p->next && p->next->next)
    {

        //init
        temp=p->next;
        new_head=temp->next;

        p->next=new_head;
        temp->next=new_head->next;
        new_head->next=temp;

        //update p
        p=temp;
    }

    return head;
}

void linkedlist::inserts(int val)
{
    if(nullptr==head)
    {
        head=new ListNode(val);
    }
    else
    {
        ListNode *heads =  head;
        while(heads->next)
        {
            heads=heads->next;
        }
        heads->next=new ListNode(val);
    }
    cout<<"insert success!"<<endl;
    return ;
}


int main()
{
    linkedlist* s = new linkedlist();
    s->prints();
    s->inserts(1);
    s->inserts(2);
    s->inserts(3);
    s->inserts(4);
    s->inserts(5);
    s->prints();
    s->head=s->swapPairs(s->head);
    s->prints();
    return 0;
}
