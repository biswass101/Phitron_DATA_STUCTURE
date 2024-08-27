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
Node* cnvArrayToBST(vector<int>& v, int l, int r)
{
    if(l > r) return NULL;
    int mid = (l + r) / 2;
    Node* root = new Node(v[mid]);
    Node* leftRoot = cnvArrayToBST(v, l, mid - 1);
    Node* rightRoot = cnvArrayToBST(v, mid + 1, r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;
}
void printLevelOrder(Node* root)
{
    queue<Node*> q;
    if(root) q.push(root);
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
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    Node* root = cnvArrayToBST(v, 0, n - 1);
    printLevelOrder(root);
    return 0;
}