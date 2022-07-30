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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp,*cur;
        temp = head;
        
        if(head == NULL || head->next == NULL)
            return head;
        
        while(temp->next != NULL){
            if(temp->next->val == temp->val){
                cur = temp->next;
                if(cur->next){
                    temp->next = cur->next;
                    delete cur;
                }
                else
                    temp->next = NULL;
            }
            else
                temp = temp->next;
        }
        return head;
    }
};