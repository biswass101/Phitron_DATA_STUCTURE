#include<bits/stdc++.h>
using namespace std;

class MyQueue
{
    list<int> myList;
    public:
    void push(int val)
    {
        myList.push_back(val);
    }
    void pop()
    {
        myList.pop_front();
    }
    int front()
    {
        return myList.front();
    }
    int size()
    {
        return myList.size();
    }
    bool isEmpty()
    {
        return myList.empty();
    }
};
int main()
{

    MyQueue q;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }
    while(!q.isEmpty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}