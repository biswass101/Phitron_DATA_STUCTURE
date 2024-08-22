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
vector<int> getLevelNodes(Node* root, int x)
{
    vector<int> res;
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        pair<Node *, int> parent = q.front();
        q.pop();
        if(parent.second == x) res.push_back(parent.first->val);
        if (parent.first->left)
            q.push({parent.first->left, parent.second + 1});
        if (parent.first->right)
            q.push({parent.first->right, parent.second + 1});
    }

    return res;
}
int main()
{
    Node* root = buildBinaryTree();
    int x; cin >> x;
    vector<int> res = getLevelNodes(root, x);
    if(res.size() == 0) cout << "Invalid";
    else for(auto x : res) cout << x << " ";
    return 0;
}