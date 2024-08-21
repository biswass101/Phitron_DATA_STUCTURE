#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int> res;
    queue<pair<TreeNode<int> *, int>> q;

    if (root)
        q.push({root, 1});
    int cur_lvl = 0;
    while (!q.empty())
    {
        pair<TreeNode<int> *, int> parent = q.front();
        q.pop();

        if (cur_lvl != parent.second)
        {
            res.push_back(parent.first->data);
        }
        cur_lvl = parent.second;
        if (parent.first->left)
            q.push({parent.first->left, parent.second + 1});
        if (parent.first->right)
            q.push({parent.first->right, parent.second + 1});
    }

    return res;
}
int main()
{
    // problem linK: https://www.codingninjas.com/studio/problems/left-view-of-a-binary-tree_920519
    return 0;
}