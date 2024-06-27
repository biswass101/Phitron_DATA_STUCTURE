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
int getSizeSLL(Node *head)
{
    int sz = 0;
    while (head != NULL)
    {
        sz++;
        head = head->next;
    }

    return sz;
}
void getMiddleEle(Node *head, int sz)
{
    if (sz == 1)
        cout << head->val;
    else
    {
        Node *tmp = head;
        if (sz % 2 != 0)
        {
            for (int i = 1; i <= sz / 2; i++)
            {
                tmp = tmp->next;
            }

            cout << tmp->val;
        }
        else
        {
            for (int i = 1; i <= (sz / 2) - 1; i++) // 1 2 3 4
            {
                tmp = tmp->next;
            }

            cout << tmp->val << " " << tmp->next->val;
        }
    }
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insertAtTail(head, val);
    }
    getMiddleEle(head, getSizeSLL(head));
    return 0;
}