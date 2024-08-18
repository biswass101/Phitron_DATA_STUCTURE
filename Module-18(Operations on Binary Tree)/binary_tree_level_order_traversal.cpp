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

void levelOrderTraversal(Node* root)
{
    queue<Node*> qu;
    qu.push(root);

    while(!qu.empty())
    {
        Node* f = qu.front();
        qu.pop();

        //main works
        cout << f->val << " ";

        //putting children
        if(f->left != NULL) qu.push(f->left);
        if(f->right != NULL) qu.push(f->right); 
    }
}

int main()
{
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

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

    cout << "Level Order Traversal: ";
    levelOrderTraversal(root);

    return 0;
}