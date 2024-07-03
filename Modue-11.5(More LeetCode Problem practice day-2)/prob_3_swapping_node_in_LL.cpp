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
    ListNode* swapNodes(ListNode* head, int k) {
        int sz = getSize(head);
        int pos1 = k;
        int pos2 = sz - k;
        ListNode* first = NULL;
        ListNode* second = NULL;
        ListNode* tmp = head;
        ListNode* tmp1 = head;
        for(int i = 1; i <= pos1 - 1; i++)
        {
            tmp = tmp->next;
        }
        first = tmp;
        for(int i = 1; i <= pos2; i++)
        {
            tmp1 = tmp1->next;
        }
        second = tmp1;
        swap(first->val, second->val);

        return head;
    }
};
int main()
{
    //Problem Link: https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
    return 0;
}