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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr)
            return nullptr;
        
        head->next = removeElements(head->next,val);
        return (head->val == val) ? head->next : head; 
    }
};

class Solution2 {
public:
    ListNode* removeElements(ListNode* head, int val) {
        
        //create a helper dummy node
        ListNode* dummy = new ListNode();
        
        //this is for if val is in head
        dummy->next = head;
        ListNode* temp = dummy;
        
        while(temp && temp->next){
            if(temp->next->val == val){
                temp->next = temp->next->next;
            }
            else
                temp = temp->next;
        }
        
        return dummy->next;
    }
};