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
Node* build_bt()
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
void printPre(Node* root)
{
    if(root == NULL) return;
    cout << root->val << " ";
    printPre(root->left);
    printPre(root->right);
}
void insertNode(Node*& root, int val)
{
    //base case
    if(root == NULL)
    {
        root = new Node(val);
        return;
    }
    //checking the actual side of node
    if(val < root->val)  
    {
        // checking is the right place empty or not
        if(root->val == NULL) 
        {
            root->left = new Node(val);
        }
        //recursively finding the next actual position
        else
        {
            insertNode(root->left, val);
        }
    }
    else
    {
        // checking is the right place empty or not
        if(root->val == NULL) 
        {
            root->right = new Node(val);
        }
        //recursively finding the next actual position
        else
        {
            insertNode(root->right, val);
        }
    }
}
int main()
{
    Node* root = build_bt();
    insertNode(root, 13);
    printPre(root);
    return 0;
}