#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> v(n);
        set<int> st;
        for(int i = 0; i < n; i++) cin >> v[i];
        sort(v.begin(), v.end());
        for(auto x : v) st.insert(x);
        for(auto x : st) cout << x << " ";
        cout << endl;
    }
    return 0;
}