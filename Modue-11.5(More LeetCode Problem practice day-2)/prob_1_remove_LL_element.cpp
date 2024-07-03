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
    ListNode* removeElements(ListNode*& head, int val) {
        ListNode* tmp = head;
        while(tmp != NULL && tmp->next != NULL)
        {
            if(val == tmp->next->val)
            {
                ListNode* del = tmp->next;
                tmp->next = tmp->next->next;
                delete del;
            }
            else tmp = tmp->next;
        }
        if(head != NULL && head->val == val)
        {
            ListNode* del = head;
            head = head->next;
            delete del;
        }

        return head;
    }
};
int main()
{
    //Problem Link: https://leetcode.com/problems/remove-linked-list-elements/
    return 0;
}