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
    ListNode* oddEvenList(ListNode* head) {

    if (head == NULL || head->next == NULL)
    return head;

    ListNode* oddDummy =  new ListNode(0);
    ListNode* evenDummy = new ListNode(0);

    ListNode* oddTail = oddDummy;
    ListNode* evenTail = evenDummy;

    int pos = 1;

    while(head!= NULL){
        if(pos%2==1){
            oddTail-> next = head;
            oddTail = oddTail->next; 
        }
        else{
            evenTail->next = head;
            evenTail = evenTail->next;
        }
        head = head->next;
        pos++;
    }    

    oddTail-> next = evenDummy->next;
    evenTail->next = NULL;

    return oddDummy->next;
    }
};