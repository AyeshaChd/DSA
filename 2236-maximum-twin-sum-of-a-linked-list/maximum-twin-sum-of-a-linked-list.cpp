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
    int pairSum(ListNode* head) {

    //    find the middle of LL
   ListNode* slow=head;
    ListNode* fast=head;

    while(fast!=NULL && fast->next != NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    };
    //  now slow is the middle node;
    // reverse the second half
    ListNode* previous=NULL;
    ListNode*  temp=slow;
    while(temp!=NULL)

    {
        ListNode* front= temp->next;
        temp->next= previous;
        previous=temp;
        temp=front;

    }
    // find the max twin sum
    int maxSum=0;
    int tempSum=0;
   ListNode* first=head;

   ListNode* second= previous; //head of the reversed second half
   while(second != NULL)
   {
    tempSum = first->val+second->val;
    maxSum=max(maxSum,tempSum);
    second=second->next;
    first=first->next;
   }
     return maxSum;   
    };
};
