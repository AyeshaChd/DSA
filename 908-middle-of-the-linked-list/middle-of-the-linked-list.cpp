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
    ListNode* middleNode(ListNode* head) {

        // --------------------my approach
        // ListNode* temp = head;
      
        // int totalLength = 0;
        // int count = 0;
        //         if (head == NULL || head->next == NULL)
        //     return head;
        // while (temp != NULL) {
        //       totalLength ++;
        //       temp=temp->next;
        // };
       
        // temp=head;
        // while (temp != NULL) {
          
        //     count++;
            
        //     if (totalLength % 2 == 0) {
             
        //         if (count == (totalLength / 2) + 1) {
                   
        //            cout<<temp->val;
        //             return temp;

        //         };
        //     };
        //     if (totalLength % 2 != 0) {
              
        //         if (count == (totalLength + 1) / 2) {
        //             return temp;
                  
        //         };
               
        //     };
        //      temp=temp->next;
        // };
        // return head;

        // same concept as mine but only improved version

    if (head == NULL || head->next == NULL)
        return head;

    ListNode* temp = head;
    int totalLength = 0;

    // Count length
    while (temp != NULL) {
        totalLength++;
        temp = temp->next;
    }

    int middle = (totalLength / 2) + 1; // it gives middle of both even or odd;
    temp = head;

    for (int i = 1; i < middle; i++) {
        temp = temp->next;
    }

    return temp;


    };
};