#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];
    int q; cin >> q;
    sort(v.begin(), v.end());
    while(q--)
    {
        int val; cin >> val;
        int l = 0, r = n - 1;
        bool flag = false;
        while(l <= r)
        {
            int mid = (l + r) / 2;
            if(val == v[mid])
            {
                flag = true;
                break;
            }
            else if(val > v[mid])
            {
                l = mid + 1;
            }
            else r = mid - 1;
        }

        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }
    return 0;
}