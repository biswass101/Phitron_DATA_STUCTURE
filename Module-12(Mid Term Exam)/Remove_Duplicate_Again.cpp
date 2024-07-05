#include<bits/stdc++.h>
using namespace std;
int main()
{
    int val;
    list<int> l;
    while(true)
    {
        cin >> val;
        if(val == -1) break;
        l.push_back(val);
    }
    l.sort();
    l.unique();
    for(auto it : l) cout << it << " ";
    return 0;
}