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
    ListNode* reverseLL(ListNode* head){
        if(head==NULL || head->next==NULL) return head;

        ListNode* last = reverseLL(head->next);
        head->next->next = head;
        head->next = NULL;

        return last;

    }
    ListNode* removeNodes(ListNode* head) {
        
        head = reverseLL(head);

        int maxNode = -1;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr){
            maxNode = max(maxNode,curr->val);
            if(curr->val < maxNode){
                prev->next = curr->next;
                ListNode* temp = curr;
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }

        }
            return reverseLL(head);

    }
};