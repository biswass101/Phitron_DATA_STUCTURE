#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    bool isOriginal;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int nodeLevel(TreeNode<int> *root, int x)
{
    // Write your code here.
    if (root == NULL)
        return 0;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 1});
    int lvl = 0;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        if (parent.first->val == x)
        {
            lvl = parent.second;
            return lvl;
        }

        if (parent.first->left)
            q.push({parent.first->left, parent.second + 1});
        if (parent.first->right)
            q.push({parent.first->right, parent.second + 1});
    }

    return lvl;
}

int main()
{
    // Problem Link: https://www.codingninjas.com/studio/problems/node-level_920383
    return 0;
}