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
bool isPalindrom(Node* head, Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i != j && i->next != j)
    {
        if(i->val != j->val) return false;
        i = i->next;
        j = j->prev;
    }
    if(i->val != j->val) return false;
    return true;
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
    cout << (isPalindrom(head, tail) ? "YES" : "NO");
    return 0;
}