/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous=NULL;
        ListNode* front=NULL;
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
       ListNode* temp=head;
       while (temp!= NULL)
       {
        front= temp->next;
        temp->next=previous;
        previous=temp;
        temp=front;
    

       }
       return previous;
        

       

    };
};
