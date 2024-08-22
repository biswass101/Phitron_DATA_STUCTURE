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
    void trav(vector<char>& v, Node* root)
    {
        if(root == NULL){
            v.push_back('x');
            return;
        }
        v.push_back(root->val - '0');
        trav(v, root->left);
        trav(v, root->right);
    }
    bool isSameTree(Node* p, Node* q) {
        vector<char> pNodes, qNodes;

        trav(pNodes, p);
        trav(qNodes, q);

        return pNodes == qNodes;
    }
};
int main()
{
    //problem link: https://leetcode.com/problems/same-tree/
    return 0;
}