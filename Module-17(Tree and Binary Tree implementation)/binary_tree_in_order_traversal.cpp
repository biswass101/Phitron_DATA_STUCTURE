#include<bits/stdc++.h>
using namespace std;
class BNode
{
    public:
        int val;
        BNode* left;
        BNode* right;
    BNode(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrderTraversal(BNode* root)
{
    //base case
    if(root == NULL) return;

    inOrderTraversal(root->left);
    cout << root->val << " "; //midly node value exploring
    inOrderTraversal(root->right);
}

int main()
{
    BNode* root = new BNode(10);
    BNode* a = new BNode(20);
    BNode* b = new BNode(30);
    BNode* c = new BNode(40);
    BNode* d = new BNode(50);
    BNode* e = new BNode(60);
    BNode* f = new BNode(70);
    BNode* g = new BNode(80);
    BNode* h = new BNode(90);
    BNode* i = new BNode(100);

    //connections-->
    root->left = a;
    root->right = b;

    a->left = c;
    a->right = h;

    c->right = e;

    b->right = d;

    d->left = f;
    d->right = g;

    h->right = i;

    cout << "In-Order Traversal: ";
    inOrderTraversal(root);

    return 0;
}