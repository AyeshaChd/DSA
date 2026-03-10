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
    int getDecimalValue(ListNode* head) {
         ListNode* temp=head;
          ListNode* previous= NULL;
           ListNode* front;
           while(temp!=NULL)
           {
            front=temp->next;
            temp->next=previous;
            previous=temp;
            temp=front;
           }
             ListNode* newhead= previous;
              int result=0;
              int power=0;
              temp=newhead;
             while(temp!=NULL)
             {    
              
                  result= result + ( pow(2,power)  *  temp->val);
                   temp= temp->next;
                  power++;
             };
             return result;




    }
};