// This is an INCORRECT attempt find singly list palindrome with O(n) time and O(1) space
// CORRECT attempt with O(n) time and O(n) space is present in same directory

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    void print(ListNode *head){
        ListNode *p=head;
        while(p!=NULL){
            cout<<p->val<<" ";
            p=p->next;
        }
    }
    ListNode* reverseList(ListNode* head, ListNode *end) {
        while(end!=head){
            ListNode *temp=end->next;
            end->next=head;
            head=head->next;
            end->next->next=temp;
        }
        return end;
    }
    
public:
    bool isPalindrome(ListNode* head) {
        
        // finding size of list, ok
        int n=0;
        ListNode* end=head;
        while(end!=NULL){
            end=end->next,++n;
        }
        
        // finding appropriate mid-point to reverse half list, ok
        end=head;
        int num=n/2;
        do{
            end=end->next;
        }while(--num);
        print(end);
        head=reverseList(head,end);
        
        // calibrating mid-point (end) again as head = end now
        if(n&1) num=n/2+1;
        else num=n/2;
        
        while(num--)
            end=end->next;
        
        ListNode* temp=head;
        //checking half part is palindrome or not
        while(end->next!=NULL)
            if(temp->val!=end->val)
                return false;
            else temp=temp->next, end=end->next;
        
        return true;
    }
};
