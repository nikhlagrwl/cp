// CORRECT solution of the singly linked list palindrome problem

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

bool isPalindrome(ListNode* head) {
    ListNode* p=head;
    stack<int> s;
    while(p!=NULL){
        s.push(p->val);
        p=p->next;
    }
    p=head;
    int n=s.size()/2;
    while(n--){
        int k=s.top();
        s.pop();
        if(p->val!=k)
            return false;
        p=p->next;
    }
    return true;
}

