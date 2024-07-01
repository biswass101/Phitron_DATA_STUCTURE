#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
void printForwardDLL(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void printBackwardDLL(Node *tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
    cout << endl;
}
void deleteAtPosition(Node* head, int pos)
{
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    tmp->next->prev = tmp;
    delete deleteNode;
}
void deleteTail(Node*& tail)
{
    Node* deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    tail->next = NULL;
}
void deleteHead(Node*& head)
{
    Node* deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}
int size(Node *head)
{
    int sz = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }

    return sz;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    // Node *head = new Node(10);
    // Node *a = new Node(20);
    // Node *b = new Node(30);
    // Node *c = new Node(40);
    // Node *tail = c;

    // // connection-->
    // head->next = a;
    // a->prev = head;

    // a->next = b;
    // b->prev = a;

    // b->next = c;
    // c->prev = b;
    int pos;
    cin >> pos;
    if(pos >= size(head)) cout << "Invalid" << endl;
    else if(pos == 0) deleteHead(head);
    else if(pos == size(head) - 1) deleteTail(tail);
    else deleteAtPosition(head, pos);
    printForwardDLL(head);
    printBackwardDLL(tail);
    return 0;
}