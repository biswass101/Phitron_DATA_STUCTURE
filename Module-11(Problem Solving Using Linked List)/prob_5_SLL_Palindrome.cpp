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
    void insertAtTail(ListNode*& head, ListNode*& tail, int val)
    {
        ListNode* newNode = new ListNode(val);
        if(tail == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }
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
    bool isPalindrome(ListNode* head) {
        ListNode* h1 = NULL;
        ListNode* t1 = NULL;
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            insertAtTail(h1, t1, tmp->val);
            tmp = tmp->next;
        }
        revList(NULL, head, head);
        while(head != NULL)
        {
            if(head->val != h1->val) return false;
            head = head->next;
            h1 = h1->next;
        }

        return true;
    }
};
int main()
{
    // problem link: https://leetcode.com/problems/palindrome-linked-list/description/
    return 0;
}