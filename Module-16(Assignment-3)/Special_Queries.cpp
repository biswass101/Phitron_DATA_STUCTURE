#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;  cin >> q;
    queue<string> que;
    while(q--)
    {
        int n;  cin >> n;
        getchar();
        if(n == 0)
        {
            string name; cin >> name;
            que.push(name);
        }
        else
        {
            if(que.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << que.front() << endl;
                que.pop();
            }
        }
    }

    return 0;
}