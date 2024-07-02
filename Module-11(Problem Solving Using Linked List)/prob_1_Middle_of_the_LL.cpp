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
class Solution1 {
public:
    int getSize(ListNode* head)
    {
        int sz = 0;
        ListNode* tmp = head;
        while(tmp != NULL)
        {
            sz++;
            tmp = tmp->next;
        }

        return sz;
    }
    ListNode* middleNode(ListNode* head) {
        int size = getSize(head);
        ListNode* middle = NULL;
        ListNode* tmp = head;
        for(int i = 1; i <= size / 2; i++)
        {
            tmp = tmp->next;
        }

        return tmp;
    }
};
class Solution2 {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
int main()
{
    //problem Link: https://leetcode.com/problems/middle-of-the-linked-list/description/
    return 0;
}