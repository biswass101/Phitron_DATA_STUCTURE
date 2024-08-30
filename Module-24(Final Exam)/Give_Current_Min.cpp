#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    while(n--)
    {
        int x; cin >> x;
        pq.push(x);
    }
    int q; cin >> q;
    while(q--)
    {
        int a, b; cin >> a;
        if(a == 1)
        {
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else if(a == 2)
        {
            if(!pq.empty()) pq.pop();
            if(pq.empty()) cout << "Empty" << endl;
            else cout << pq.top() << endl;
        }
        else
        {
            cin >> b;
            pq.push(b);
            cout << pq.top() << endl;
        }
    }
    return 0;
}