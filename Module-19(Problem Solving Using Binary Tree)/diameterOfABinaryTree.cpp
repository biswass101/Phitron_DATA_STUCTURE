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

int mx = 0;
int trav(TreeNode<int> *root)
{
    if (root == NULL)
        return 0;
    int l = trav(root->left);
    int r = trav(root->right);
    mx = max(mx, l + r);
    return 1 + max(l, r);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{

    int getDim = trav(root);
    return mx;
}

int main()
{
    // problem link: https://www.codingninjas.com/studio/problems/diameter-of-the-binary-tree_920552
    return 0;
}