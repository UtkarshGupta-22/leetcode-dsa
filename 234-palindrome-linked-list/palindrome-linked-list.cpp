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
        if(!head || !head->next) return head;

        ListNode* last = reverseLL(head->next);
        head->next->next = head;

        head->next = NULL;
        return last;
    }


    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = NULL;

        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            prev = slow;
            slow = slow->next;
        }
        ListNode* tail = reverseLL(slow);
        prev->next = NULL;
        
        while(tail!=NULL && head!=NULL){
            if(tail->val!=head->val){
                return false;
            }
            tail = tail->next;
            head= head->next;
        }
        return true;
    }
};