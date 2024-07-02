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
void insertAtPositon(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;

    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void insertAtHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
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
    Node *head = NULL;
    Node *tail = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (pos == 0)
            insertAtHead(head, tail, val);
        else if (pos == size(head))
            insertAtTail(head, tail, val);
        else
            insertAtPositon(head, pos, val);
        printForwardDLL(head);
        printBackwardDLL(tail);
    }
    return 0;
}