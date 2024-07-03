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
    void insertAtTail(ListNode*& h, ListNode*& t, int val)
    {
        ListNode* newNode = new ListNode(val);
        if(t == NULL)
        {
            h = newNode;
            t = newNode;
            return;
        }
        t->next = newNode;
        t = t->next;
    }
    ListNode* mergeNodes(ListNode* head) {
        ListNode* h = NULL;
        ListNode* t = NULL;
        int sum = 0;
        while(head != NULL)
        {
            if(head->val != 0)
            {
                sum += head->val;
            }
            else
            {
                if(sum != 0)
                {
                    insertAtTail(h, t, sum);
                    sum = 0;
                }
            }
            head = head->next;
        }

        return h;
    }
};
int main()
{
    //P.L.: https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
    return 0;
}