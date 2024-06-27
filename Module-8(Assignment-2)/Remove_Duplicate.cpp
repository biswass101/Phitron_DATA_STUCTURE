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
void insertAtTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}
void removeDuplicate(Node *head)
{
    Node *tmp1 = head;

    while (tmp1 != NULL and tmp1->next != NULL)
    {
        Node *tmp2 = tmp1;
        while (tmp2->next != NULL)
        {
            if (tmp1->val == tmp2->next->val)
            {
                Node *tmp3 = tmp2->next;
                tmp2->next = tmp2->next->next;
                delete tmp3;
            }
            else
            {
                tmp2 = tmp2->next;
            }
        }
        tmp1 = tmp1->next;
    }
}
void printSLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val;
    while (1)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head1, tail1, val);
    }
    // printSLL(head1);
    removeDuplicate(head1);
    printSLL(head1);
    return 0;
}