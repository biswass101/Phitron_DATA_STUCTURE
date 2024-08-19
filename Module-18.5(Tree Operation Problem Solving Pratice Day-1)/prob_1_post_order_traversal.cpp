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
void travese(vector<int>& travRes, Node* root)
{
    if(root == NULL) return;
    travese(travRes, root->left);
    travese(travRes, root->right);
    travRes.push_back(root->val);
}
vector<int> postorderTraversal(Node *root)
{
    // Write your code here.
    vector<int> travRes;
    travese(travRes, root);

    return travRes;
}
int main()
{
    //problem link: https://www.codingninjas.com/studio/problems/name_2035933
    return 0;
}