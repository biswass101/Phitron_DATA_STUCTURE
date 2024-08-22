#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
class Solution {
public:
    bool checkTree(Node* root) {
        return root->val == root->left->val + root->right->val;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/root-equals-sum-of-children/
    return 0;
}