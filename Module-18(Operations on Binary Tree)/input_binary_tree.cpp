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
        //parent node-->
        Node* parent = q.front();
        q.pop();


        //Declaring variable for Node value and Node
        int left_val, right_val; cin >> left_val >> right_val;
        Node* my_left; Node* my_right;

        //setting Node value and Node
        if(left_val == -1) my_left = NULL;
        else my_left = new Node(left_val);
        if(right_val == -1) my_right = NULL;
        else my_right = new Node(right_val);

        //Connecting Nodes with parent
        parent->left = my_left;
        parent->right = my_right;

        //Putting Connected Node into the queue for next interation
        if(parent->left) q.push(parent->left);
        if(parent->right) q.push(parent->right);

    }
    return root;
    
}

void printLevelOrder(Node* root)
{
    if(root == NULL) 
    {
        cout << "Root is Empty" << endl;
        return;
    }
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
int main()
{
    Node* root = buildBinaryTree();
    printLevelOrder(root);
    return 0;
}