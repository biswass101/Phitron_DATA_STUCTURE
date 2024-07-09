#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node *next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class MyQueue
{
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    public:
    void push(int val)
    {
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        return sz == 0;
    }
};
int main()
{

    MyQueue q;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.isEmpty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}