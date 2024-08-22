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
    void trav(Node* root, int x, bool& ans)
    {
        if(root == NULL) return;
        if(root->val != x){
            ans = false;
            return;
        }
        trav(root->left, x, ans);
        trav(root->right, x, ans);
    }
    bool isUnivalTree(Node* root) {
        bool ans = true;
        trav(root, root->val, ans);

        return ans;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/univalued-binary-tree/
    return 0;
}