/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// solution 1

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set <ListNode*> ar;
        ListNode *temp = headA;
        while(temp){
            ar.insert(temp);
            temp = temp->next;
        }
        
        temp = headB;
        
        while(temp){
            if(ar.find(temp) != ar.end())
                return temp;
            temp = temp->next;
        }
        
        return NULL;
    }
};

// solution 2
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first,*second;
        int lenA = 0, lenB = 0;
        first = headA,second = headB;
        
        while(first){
            first = first->next;
            lenA++;
        }
        
        while(second){
            second = second->next;
            lenB++;
        }
        
        if(lenA < lenB){
            int t = lenA;
            lenA = lenB;
            lenB = t;
            first = headA;
            headA = headB;
            headB = first;
        }
        
        int d = lenA - lenB;
        while(d > 0){
            headA = headA->next;
            d--;
        }
        
        while(headA != headB){
            headA = headA->next;
            headB = headB->next;
        }
        return headA;
    }
};