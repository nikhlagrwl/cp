// This is the solution where we find whether a cycle exists in the Linked List or not using O(1) space and O(N) time
// Damn amazing it is.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
*/

bool hasCycle(ListNode *head) {
    if(head==NULL or head->next==NULL)
        return false;
    ListNode*slow=head,*fast=head->next;

    while(slow!=fast){
        if(fast==NULL or fast->next==NULL)
            return false;
        slow=slow->next;
        fast=fast->next->next;
    }
    return true;

}
