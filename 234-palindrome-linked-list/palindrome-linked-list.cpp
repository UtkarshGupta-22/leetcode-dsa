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
    bool isPalindrome(ListNode* head) {
        vector<int> res;

        ListNode* curr = head;

        while(curr){
            res.push_back(curr->val);
            curr = curr->next;
        }
        
        int i=0;
        int j=res.size()-1;

        while(i<j){
            if(res[i]!=res[j]) return false;
            i++;
            j--;             
        }
        return true;
    }
};