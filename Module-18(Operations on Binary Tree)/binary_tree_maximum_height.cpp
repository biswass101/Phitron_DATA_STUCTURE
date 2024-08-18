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
    Node* root;
    int val; cin >>val;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        int left_val, right_val; cin >> left_val >> right_val;
        Node* myLeft; Node* myRight;

        if(left_val == -1) myLeft = NULL;
        else myLeft = new Node(left_val);
        if(right_val == -1) myRight = NULL;
        else myRight = new Node(right_val);

        parent->left = myLeft;
        parent->right = myRight;

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }

    return root;
}

void printLevelOrder(Node* root)
{
    if(root == NULL) { cout << "Tree is empty"; return; }

    queue<Node*> q;
    q.push(root);

    while(!q.empty())
    {
        Node* parent = q.front();
        q.pop();

        cout << parent->val << " ";

        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);
    }
}

int maxHeight(Node* root)
{
    if(root == NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return 1 + max(l, r);
}
int main()
{
    Node* root = buildBinaryTree();
    printLevelOrder(root);
    cout << endl;
    cout << "Maximum Height of  Binary Tree: " << maxHeight(root); 
    return 0;
}