class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head==NULL) return NULL;

        //1. Insert the new nodes in between the original linked list

        Node* curr = head;

        while(curr){

            Node* currNext = curr->next;
            curr->next = new Node(curr->val);

            curr->next->next = currNext;

            curr = currNext;
        }

        //2) Deep copy of random pointers

        curr = head;
        while(curr){

            if(curr->random == NULL){
                curr->next->random = NULL;
            }
            else{
                curr->next->random = curr->random->next;

            }

            curr = curr->next->next;

        }

        Node* newHead = head->next;
        Node* newCurr = newHead;

        curr = head;

        while(curr && newCurr){
            curr->next = curr->next == NULL? NULL : curr->next->next;

            newCurr->next = newCurr->next == NULL? NULL : newCurr->next->next;

            curr = curr->next;

            newCurr = newCurr->next;
        }
        return newHead;
        
    }
};