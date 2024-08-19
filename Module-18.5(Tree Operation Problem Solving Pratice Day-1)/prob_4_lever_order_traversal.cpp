#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void traverse(vector<int> &travResult, BinaryTreeNode<int> *root)
{
    if (root == NULL)
        return;
    queue<BinaryTreeNode<int> *> q;
    q.push(root);
    while (!q.empty())
    {
        BinaryTreeNode<int> *parent = q.front();
        q.pop();

        travResult.push_back(parent->val);

        if (parent->left)
            q.push(parent->left);
        if (parent->right)
            q.push(parent->right);
    }
}
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> travResult;
    traverse(travResult, root);

    return travResult;
}
int main()
{
    // problem Link: https://www.codingninjas.com/studio/problems/level-order-traversal_796002
    return 0;
}