#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    while(q--)
    {
        int val; cin >> val;
        int l= 0, r = n - 1;
        bool flag = false;
        while(l <= r)
        {
            int mid = (l+ r)/2;
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

        flag ? cout << "found" << endl : cout << "not found" << endl;
    }
    return 0;
}