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
void getleaf(vector<int>& v, Node* root)
{
    if(root == NULL) return;
    if(!root->left && !root->right)
    {
        v.push_back(root->val);
        return;
    }
    getleaf(v, root->left);
    getleaf(v, root->right);
}
int main()
{
    Node* root = buildBinaryTree();
    vector<int> res;
    getleaf(res, root);
    sort(res.begin(), res.end(), greater<int>());
    for(auto x : res) cout << x << " ";
    return 0;
}