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
   int count=0;
   ListNode*  temp=head;
   while(temp)
   {
    count++;
    temp=temp->next;
   }
    
    int mid=count/2;
      temp=head;
    ListNode* previous =nullptr;
    count=0;
    while(temp)
    {
        count++;
        if(count>mid)
        {
     
     ListNode* front=temp->next;
            temp->next=previous;
            previous=temp;
            temp=front;
        }
 else temp=temp->next;
    };
     ListNode* leftHead=previous;
     int maxSum=0;
     while(leftHead)
     {
        if((leftHead->val + head->val)>maxSum)maxSum=leftHead->val + head->val;
        leftHead=leftHead->next;
        head=head->next;
     };
     return maxSum;
};
};