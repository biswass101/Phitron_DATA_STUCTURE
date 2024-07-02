#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node* next;
        Node* prev;
        Node(int val){
            this->val = val;
            this->next = NULL;
            this->prev = NULL;
        }
};
void insertAtTail(Node*& head, Node*& tail, int val)
{
    Node* newNode = new Node(val);
    if(tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int getSize(Node *head)
{
    Node *tmp = head;
    int sz = 0;
    while (tmp != NULL)
    {
        sz++;
        tmp = tmp->next;
    }
    return sz;
}
bool isSame(Node* head, Node* head1)
{
    if(getSize(head) != getSize(head1)) return false;
    else
    {
        Node *tmp = head;
        Node *tmp1 = head1;
        while (tmp != NULL)
        {
            if(tmp->val != tmp1->val) return false;
            tmp = tmp->next;
            tmp1 = tmp1->next;
        }
        return true;
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head1, tail1, val);
    }

    isSame(head, head1) ? cout << "YES" : cout << "NO";
    return 0;
}