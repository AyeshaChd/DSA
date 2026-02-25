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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

         // Two pointers - O(m+n), O(1)
        ListNode* a = headA;
        ListNode* b = headB;
        // since intersection always exists
        // traverse both lists by changing heads once null 
        // so that both pointers land at null
        while(a!=b){
            a = a == NULL? headB:a->next;
            b = b == NULL ? headA: b->next;
        }
        return a; // or b as both will be intersection  
    }
      
      
};