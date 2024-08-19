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
void travese(vector<int> &travRes, Node *root) {
  if (root == NULL)
    return;
  travese(travRes, root->left);
  travRes.push_back(root->val);
  travese(travRes, root->right);
}
vector<int> getInOrderTraversal(Node *root) {
  // Write your code here.
  vector<int> travRes;
  travese(travRes, root);

  return travRes;
}
int main()
{
    
    return 0;
}