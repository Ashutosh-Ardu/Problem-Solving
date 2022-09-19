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
    public ListNode removeElements(ListNode head, int val) {
        
        if(head == null)
        {
            return null;
        }
        if(head.next == null && head.val == val)
        {
            return null;
        }
        
        
        ListNode root = head;
        
        
        
        
        
        while(root.next != null)
        {
           if(root.val == val)
            {
                head= root.next;
                root = root.next;
               continue;
            }
            if(root.next.val == val)
            {
               
                root.next = root.next.next;
                continue;
            }
            
            root = root.next;
            
        }
        
        if(head.next == null && head.val == val)
        {
            return null;
        }
        
    
        return head;
    }
}