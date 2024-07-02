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
    void deleteNode(ListNode*& node) {
       node->val = node->next->val;
       ListNode* deleteNode = node->next;
       node->next = node->next->next;
       delete deleteNode;
    }
};
int main()
{
    // problem link: https://leetcode.com/problems/delete-node-in-a-linked-list/
    return 0;
}