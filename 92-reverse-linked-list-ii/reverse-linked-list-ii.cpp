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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int> arr; 
        ListNode* temp = head;
        while( temp != NULL){
             arr.push_back( temp-> val);
             temp = temp-> next;
        }
        reverse ( arr.begin() + left-1, arr.begin () + right);
         temp = head; 
         int i = 0 ; 

         while( temp != NULL){
            temp-> val = arr[ i ];
            i++;
             temp = temp -> next;

         }
          return  head;
        
    }
};