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
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefix_sum=0;

        unordered_map<int,ListNode*> mp;

        ListNode* dummyNode = new ListNode(0);

        dummyNode->next = head;

        mp[0] = dummyNode;

        while(head!=NULL){
            prefix_sum += head->val;

            if(mp.find(prefix_sum)!= mp.end()){
                //delete wala kaam 

                ListNode* start = mp[prefix_sum];
                ListNode* temp = start;

                int pSum = prefix_sum;

                while(temp !=head){
                    
                    temp = temp->next;

                    pSum += temp->val;
                    if(temp!=head) mp.erase(pSum);
                }

                start->next = head->next;
            }
            else{
                mp[prefix_sum] = head;
            }
            head = head->next;
        }
        return dummyNode->next;
    }
};