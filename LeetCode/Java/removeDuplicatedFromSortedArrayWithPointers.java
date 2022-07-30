/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteDuplicates(ListNode head) {
        ListNode ar=head;
        
        if(ar == null || ar.next == null)
            return head;
        
        while(ar.next != null){
            if(ar.val == ar.next.val){
                ar.next = ar.next.next;
            }
            else{
                ar = ar.next;
            }
        }
        return head;
    }
}