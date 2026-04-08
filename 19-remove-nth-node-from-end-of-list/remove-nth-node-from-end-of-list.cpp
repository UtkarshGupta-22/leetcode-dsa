class Solution {
public:
    int count(ListNode* head){
        int count=0;

        ListNode* curr = head;

        while(curr){
            count++;
            curr = curr->next;
        }
        return count;

    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int length = count(head);

        if(n==length){
            return head->next;
        }
        int front_count = length-n;
        ListNode* prev = NULL;
        ListNode* temp = head;
        while(front_count--){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;

        return head;
    }
};