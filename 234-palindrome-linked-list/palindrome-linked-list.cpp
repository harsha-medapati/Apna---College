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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        string s,r;
        while(head != NULL)
        {
            s += to_string(head->val);
            head = head->next;
        }
        r += s;
        reverse(r.begin(),r.end());
        if(s == r) return true;
        return false;
    }
};