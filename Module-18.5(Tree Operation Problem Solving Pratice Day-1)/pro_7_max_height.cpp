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
int heightOfBinaryTree(Node *root)
{
	if(root == NULL) return 0; 
    return 1 + max(heightOfBinaryTree(root->left), heightOfBinaryTree(root->right));
}
int main()
{
    //problem link: https://www.codingninjas.com/studio/problems/tree-height_4609628
    return 0;
}