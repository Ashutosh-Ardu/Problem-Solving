/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
Clue for solving the problem
Intuition- let's say 2 people are running in a circular track, one person is running slowly 
and another person is running faster(2 times the speed of first person)
After a certain period of time person 2 again meet or overtake person 1,
In that case we can conclude that the track is circular ( replace running track with our Linked list)
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        vector<int> ar;

        if(head == nullptr)
            return false;
        
        ListNode *first = head;
        ListNode *second = head;
        
        while(first != nullptr && first->next != nullptr){
            first = first->next->next;
            second = second->next;
            
            if(first == second)
                return true;
        }
        return false;
    }
};