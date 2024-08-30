#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    getchar();
    while(t--)
    {
        string s; getline(cin, s);
        map<string, int> mp;
        string word;
        stringstream ss(s);
        string max;
        int cnt = 0;
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word] > cnt)
            {
                cnt = mp[word];
                max = word;
            }
        }
        cout << max << " " << cnt << endl;
    }
    return 0;
}
