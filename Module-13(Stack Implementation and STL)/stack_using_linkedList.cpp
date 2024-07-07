#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* prev;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};
class myStack{
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    public:
        void push(int val)
        {
            sz++;
            Node* newNode = new Node(val);
            if(head == NULL)
            {
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
        void pop()
        {
            sz--;
            Node* deletNode = tail;
            tail = tail->prev;
            if(tail == NULL)
            {
                head = NULL;

            }
            else
            {
                tail->next = NULL;
            }
            delete deletNode;
        }
        int top()
        {
           return tail->val;
        }
        int size()
        {
            return sz;
        }
        bool isEmpty()
        {
            return sz == 0;
        }
};
int main()
{
    myStack st;
    // st.pop(); // seg. fault
    // cout << st.top() << endl; // seg. fault
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while(!st.isEmpty()) // {!st.isEmpty()} = {st.isEmpty() == false}
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}