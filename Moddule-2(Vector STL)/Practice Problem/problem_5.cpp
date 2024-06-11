#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int old_val, new_val; cin >> old_val >> new_val;
    int find_val; cin >> find_val;
    replace(v.begin(), v.end(), old_val, new_val);
    auto res_pos = find(v.begin(), v.end(), find_val);
    for(auto x : v) cout << x << " ";
    cout << endl;
    cout << res_pos-v.begin() << endl;
    return 0;
}