#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int m; cin >> m;
    stack<int> st;
    for(int i = 0; i < n; i++) {int x; cin >> x; st.push(x);}
    queue<int> q;
    for(int i = 0; i < m; i++) {int x; cin >> x; q.push(x);}

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