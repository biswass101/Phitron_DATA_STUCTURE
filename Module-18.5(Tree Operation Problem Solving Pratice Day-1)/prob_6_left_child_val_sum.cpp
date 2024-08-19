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
long long leftSum(Node *root) {
  if (root == NULL)
    return 0;
  if (root->left != NULL) {
    long long myLeft = root->left->val;
    long long l = leftSum(root->left);
    long long r = leftSum(root->right);

    return myLeft + l + r;
  }

  long long myLeft = 0;
  long long l = leftSum(root->left);
  long long r = leftSum(root->right);

  return myLeft + l + r;
}
int main()
{
    //problem link: https://www.codingninjas.com/studio/problems/left-sum_920380
    return 0;
}