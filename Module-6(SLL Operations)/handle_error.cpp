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
        if(tmp == NULL)
        {
            cout << "Invalid Index" << endl << endl;
            return;
        }
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
void deleteAtPosition(Node* head, int pos) //Node(10, Null)
{
    Node* tmp = head;
    for(int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
        if(tmp == NULL)
        {
            cout << "Invalid Index" << endl << endl;
            return;
        }
    }
    if(tmp->next == NULL)
    {
        cout << "Invalid Index" << endl << endl;
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << endl << endl << "Deleted at position " << pos << endl;
}
void deleteHead(Node*& head)
{
    if(head == NULL)
    {
        cout << "Head is not available" << endl;
        return;
    }
    Node* deleteNode = head;
    head = head->next;
    delete deleteNode;
    cout << endl << endl << "Head Deleted "<< endl;
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
        cout << "Option-1: Insert at Tail" << endl; //done
        cout << "Option-2: Print Linked List" << endl; //done
        cout << "Option-3: Insert at any Position" << endl; //done
        cout << "Option-4: Insert at Head" << endl; //done
        cout << "Option-5: Delete at Position" << endl; //done
        cout << "Option-6: Delete Head" << endl; //done
        cout << "Option-7: Terminate" << endl; //done
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
        else if(op == 5)
        {
            cout << "Enter Position: ";
            int pos; cin >> pos;
            if(pos == 0) deleteHead(head);
            else deleteAtPosition(head, pos);
        }
        else if(op == 6){
            deleteHead(head);
        }
        else if(op == 7) break;
    }
    return 0;
}

