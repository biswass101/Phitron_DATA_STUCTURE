#include <bits/stdc++.h>
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

bool isSpecialBinaryTree(Node *root)
{
    if (root == NULL)
        return false;
    if (root->left == NULL && root->right == NULL)
        return true;

    bool l = isSpecialBinaryTree(root->left);
    bool r = isSpecialBinaryTree(root->right);

    return l && r;
}
int main()
{
    // problem Link: https://www.codingninjas.com/studio/problems/special-binary-tree_920502
    return 0;
}