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
    int getSize(ListNode* head)
    {
        int sz = 0;
        while(head != NULL)
        {
            sz++;
            head = head->next;
        }

        return sz;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int sz = getSize(head);
        int pos = sz - n;
        ListNode* tmp = head;
        if(pos == 0)
        {
            ListNode* del = head;
            head = head->next;
            delete del;
        }
        else
        {
            for(int i = 1; i <= pos - 1; i++)
            {
                tmp = tmp->next;
            }
            ListNode* del = tmp->next;
            tmp->next = tmp->next->next;
            delete del;
        }

        return head;
    }
};
int main()
{
    //Problem Link: https://leetcode.com/problems/remove-nth-node-from-end-of-list/
    return 0;
}