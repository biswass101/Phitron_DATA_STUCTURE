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
void insertAtTail(Node *&head, int val)
{
    Node *newNode = new Node(val);

    if (head == NULL)
    {
        head = newNode;
        cout << endl << endl << "inserted at head" << endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    cout << endl << endl << "inserted at tail" << endl;
}
void insertAtPosition(Node* head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    cout << endl << endl << "Inserted at position " << pos << endl;
}
void insertAtHead(Node*& head, int val)
{
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout << endl << endl << "Inserted at Head" << endl;
}
void printSLL(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;

    while (true)
    {
        cout << "Option-1: Insert at Tail" << endl;
        cout << "Option-2: Print Linked List" << endl;
        cout << "Option-3: Insert at any Position" << endl;
        cout << "Option-4: Insert at Head" << endl;
        cout << "Option-5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter Value: ";
            int val;
            cin >> val;
            insertAtTail(head, val);
        }
        else if(op == 2)
        {
            printSLL(head);
        }
        else if(op == 3)
        {
            int pos, val;
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter value: ";
            cin >> val;
            if(pos == 0) insertAtHead(head, val);
            else
            {
                insertAtPosition(head, pos, val);
            }
        }
        else if(op == 4)
        {
            int val;
            cout << "Enter Value: ";
            cin >> val;
            insertAtHead(head, val);
        }
        else if(op == 5) break;
    }
    return 0;
}