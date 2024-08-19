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
void travese(vector<int> &travRes, TreeNode<int> *root)
{
    if (root == NULL)
        return;
    travRes.push_back(root->data);
    travese(travRes, root->left);
    travese(travRes, root->right);
}
vector<int> preOrder(TreeNode<int> *root)
{
    // Write your code here.
    vector<int> travRes;
    travese(travRes, root);

    return travRes;
}
int main()
{
    // problem Link: https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948
    return 0;
}