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
        bool empty()
        {
            return sz == 0;
        }
};
class MyQueue
{
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
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node* deleteNode = head;
        head = head->next;
        if(head == NULL)
        {
            tail = NULL;
            delete deleteNode;
            return;
        }
        head->prev = NULL;
        delete deleteNode;
    }
    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        return sz == 0;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    MyQueue q;
    int m;
    cin >> m;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 1; i <= m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    bool flag = true;
    if(st.size() != q.size()) flag = false;
    else
    {
        while(!st.empty())
        {
            if(st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}