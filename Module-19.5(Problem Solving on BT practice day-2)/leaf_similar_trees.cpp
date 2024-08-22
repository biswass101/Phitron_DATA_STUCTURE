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
    void getLeafs(vector<int>& v, Node* root)
    {
        if(root == NULL) return;
        if(root->left == NULL and root->right == NULL)
        {
            v.push_back(root->val);
        }
        getLeafs(v, root->left);
        getLeafs(v, root->right);
    }
    bool leafSimilar(Node* root1, Node* root2) {
        vector<int> leaf1, leaf2;
        getLeafs(leaf1, root1);
        getLeafs(leaf2, root2);

        return leaf1 == leaf2;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/leaf-similar-trees/
    return 0;
}