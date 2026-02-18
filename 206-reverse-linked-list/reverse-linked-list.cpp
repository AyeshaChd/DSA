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
        if(head==NULL) return NULL;
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        };

        ListNode* newhead= new ListNode(v[v.size()-1]);
        ListNode* mover = newhead;
        for(int i=v.size()-2; i>=0;i--)
        {
           ListNode* temp = new ListNode(v[i]);
            mover->next=temp;
            mover=temp;
        };
        return newhead;
     
            
        };


    };
