#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class Stack
{
    // Write your code here
    Node *head = NULL;
    int sz = 0;

public:
    Stack()
    {
        // Write your code here
    }

    int getSize()
    {
        return sz;
    }

    bool isEmpty()
    {
        return sz == 0;
    }

    void push(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            sz++;
            return;
        }
        newNode->next = head;
        head = newNode;
        sz++;
    }

    void pop()
    {
        if (head == NULL)
            return;
        Node *del = head;
        head = head->next;
        delete del;
        sz--;
    }

    int getTop()
    {
        if (head == NULL)
            return -1;
        else
            return head->data;
    }
};
int main()
{
    // Problem LinK: https://www.naukri.com/code360/problems/implement-stack-with-linked-list_630475?leftPanelTabValue=PROBLEM
    return 0;
}