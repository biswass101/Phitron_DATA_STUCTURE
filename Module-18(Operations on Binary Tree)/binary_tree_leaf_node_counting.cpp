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

int countLeafNodes(Node* root)
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int left = countLeafNodes(root->left);
    int right = countLeafNodes(root->right);

    return left + right;
}
int main()
{
    Node* root = buildBinaryTree();
    printLevelOrder(root);
    cout << endl;
    cout << "Number of Leaf Nodes in Binary Tree: " << countLeafNodes(root); 
    return 0;
}