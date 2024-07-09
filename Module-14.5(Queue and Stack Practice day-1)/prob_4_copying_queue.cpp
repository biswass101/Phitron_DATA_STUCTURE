#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    queue<int> q, q1;
    stack<int> st;
    for(int i = 0; i < n; i++) {int x; cin >> x; q.push(x);}
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q1.push(st.top());
        st.pop();
    }
    while(!q1.empty())
    {
        cout << q1.front() << " ";
        q1.pop();
    }
    return 0;
}