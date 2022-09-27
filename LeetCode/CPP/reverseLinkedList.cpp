// link : https://www.youtube.com/watch?v=ugQ2DVJJroc&ab_channel=AnujBhaiya
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

// iterative solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *cur = head,*temp = NULL;
        
        while(head){
            cur = cur->next;
            head->next = temp;
            temp = head;
            head = cur;
        }
        
        return temp;
    }
};

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

// recursive solution
class Solution2 {
public:
    ListNode* reverseList(ListNode* head) {
        
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *temp = reverseList(head->next);
        
        head->next->next = head;
        head->next = NULL;
        
        return temp;
    }
};