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
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void printSLL(Node *head)
{
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
        cout << "Option-3: Terminate" << endl;
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
        else if(op == 3) break;
    }
    return 0;
}