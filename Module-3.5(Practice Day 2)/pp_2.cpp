#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n), v1(n), v2(n);
    int ans_idx = -1;
    for(int i = 0; i < n; i++) cin >> v[i];
    v1[0] = v[0];
    v2[n -1] = v[n -1];
    for(int i = 1; i < n; i++)
    {
        v1[i] = v[i]+v1[i-1];
    }
    for(int i = n-2; i >= 0; i--)
    {
        v2[i] = v[i]+v2[i+1];
    }
    for(int i = 1; i < n - 1; i++)
    {
        if(v1[i - 1] == v2[i + 1])
        {
            ans_idx = i;
            break;
        }
    }
    cout << ans_idx << endl;
    return 0;
}