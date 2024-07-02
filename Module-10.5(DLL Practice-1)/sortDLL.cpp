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
void printForwardDLL(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void sortDLL(Node* head)
{
    for(Node* i = head; i->next != NULL; i = i->next)
    {
        for(Node* j = i->next; j != NULL;  j = j->next)
        {
            if(i->val > j->val) swap(i->val, j->val);
        }
    }
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        insertAtTail(head, tail, val);
    }
    sortDLL(head);
    printForwardDLL(head);
    return 0;
}