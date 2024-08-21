#include <bits/stdc++.h>
using namespace std;

template <typename T>

class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;
    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> reverseLevelOrder(TreeNode<int> *root)
{
    vector<int> res;
    queue<TreeNode<int> *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        TreeNode<int> *parent = q.front();
        q.pop();
        res.push_back(parent->val);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }

    reverse(res.begin(), res.end());

    return res;
}
int main()
{
    // problem link: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339
    return 0;
}