#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    stack<int> st, st1;
    queue<int> q;
    for(int i = 0; i < n; i++) {int x; cin >> x; st.push(x);}
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!q.empty())
    {
        st1.push(q.front());
        q.pop();
    }
    while(!st1.empty())
    {
        cout << st1.top() << " ";
        st1.pop();
    }
    return 0;
}