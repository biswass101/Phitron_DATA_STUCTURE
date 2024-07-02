#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
        int val;
        ListNode* next;
        ListNode(int val){
            this->val = val;
            this->next = NULL;
        }
};
class Solution {
public:
    void revList(ListNode* prev, ListNode* cur, ListNode*& head)
    {
        if(cur == NULL) return;
        if(cur->next == NULL)
        {
            head = cur;
            cur->next = prev;
            return;
        }
        revList(cur, cur->next, head);
        cur->next = prev;
    }
    ListNode* reverseList(ListNode* head) {
        revList(NULL, head, head);
        return head;
    }
};
int main()
{
    // problem link: https://leetcode.com/problems/reverse-linked-list/description/
    return 0;
}