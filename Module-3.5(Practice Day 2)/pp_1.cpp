#include<bits/stdc++.h>
using namespace std;
void makePrefixArray(vector<int>& v)
{
    for(int i = 1; i < v.size() ; i++)
    {
        v[i] += v[i-1];
    }
}
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n ; i++) cin >> v[i];
    makePrefixArray(v);
    for(int x : v) cout << x << " ";
    return 0;
}