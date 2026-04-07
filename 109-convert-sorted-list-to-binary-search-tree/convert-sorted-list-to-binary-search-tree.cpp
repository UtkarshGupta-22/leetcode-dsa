class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return new TreeNode(head->val);

        ListNode* PrevSlow = NULL;
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast!=NULL && fast->next!=NULL){
            PrevSlow = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        TreeNode* root = new TreeNode(slow->val);
        PrevSlow ->next = NULL;

        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        return root;


    }
};