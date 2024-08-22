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
Node* buildBinaryTree()
{
    int val; cin >> val;
    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        
        Node* parent = q.front();
        q.pop();

        int left_val, right_val; cin >> left_val >> right_val;
        Node* my_left; Node* my_right;

        if(left_val == -1) my_left = NULL;
        else my_left = new Node(left_val);
        if(right_val == -1) my_right = NULL;
        else my_right = new Node(right_val);

        parent->left = my_left;
        parent->right = my_right;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);

    }
    return root;
    
}
int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return 1 + max(l, r);
}
int cntNodes(Node* root)
{
    if(root == NULL) return 0;
    int l = cntNodes(root->left);
    int r = cntNodes(root->right);
    return 1 + l + r;
}
int main()
{
    Node* root = buildBinaryTree();
    int nodes = cntNodes(root);
    int maxH = maxHeight(root);

    int tN = pow(2, maxH) - 1;
    nodes == tN ? cout << "YES" : cout << "NO";
    return 0;
}