#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    stack<int> st1;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        st1.push(x);
    }
    int m; cin >> m;
    stack<int> st2;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        st2.push(x);
    }

    bool flag = true;
    if(st1.size() != st2.size()) flag = false;
    else{
        while(!st1.empty())
        {
            if(st1.top() != st2.top())
            {
                flag = false;
                break;
            }

            st1.pop();
            st2.pop();
        }
    }

    cout << (flag ? "YES" : "NO") << endl;
    return 0;
}