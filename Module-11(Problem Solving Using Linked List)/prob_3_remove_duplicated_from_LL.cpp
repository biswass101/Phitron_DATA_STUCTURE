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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* a = head;
        ListNode* b = head;
        while(b != NULL and b->next != NULL)
        {
            if(a->val == b->next->val)
            {
                ListNode* deleteNode = b->next;
                b->next = b->next->next;
                delete deleteNode;
            }
            else
            {
                a = a->next;
                b = b->next;
            }
        }

        return head;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
    return 0;
}