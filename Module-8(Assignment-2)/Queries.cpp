#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void printSLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void insertAtHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void deleteHead(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void deleteAtPosition(Node *head, int pos)
{
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if (tmp == NULL)
        {

            return;
        }
    }
    if (tmp->next == NULL)
    {

        return;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
int sizeSLL(Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }
   
    return sz;
}
int main()
{
    Node *head = NULL;
    int q;
    cin >> q;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insertAtHead(head, v);
            printSLL(head);
        }
        else if (x == 1)
        {
            insertAtTail(head, v);
            printSLL(head);
        }
        else if (x == 2)
        {
            if(v == 0)
            {
                deleteHead(head);
                printSLL(head);
            }
            else if(v >= sizeSLL(head))
            {
                printSLL(head);
            }
            else{
                deleteAtPosition(head, v);
                printSLL(head);
            }
                
        }
    }

    return 0;
}