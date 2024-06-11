#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q; cin >> n >> q;
    vector<long long int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    for(int i = 1; i < n; i++) v[i] += v[i-1];
    while(q--)
    {
        int l, r; cin >> l >> r;
        l--; r--;
        if(l == 0) cout << v[r] << endl;
        else
        {
            cout << v[r] - v[l-1];
            cout << endl;
        }
    }
    return 0;
}