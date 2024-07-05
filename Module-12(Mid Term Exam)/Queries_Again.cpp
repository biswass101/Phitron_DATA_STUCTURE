#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    list<int> myList;
    while (q--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > myList.size())
        {
            cout << "Invalid" << endl;
            continue;
        }
        else if (pos == 0)
            myList.push_front(val);
        else if (pos == myList.size())
           myList.push_back(val);
        else
            myList.insert(next(myList.begin(), pos), val);
        cout << "L -> ";
        for(auto val : myList) cout << val << " ";
        cout << endl;
        cout << "R -> ";
        myList.reverse();
        for(auto val : myList) cout << val << " ";
        cout << endl;
        myList.reverse();
    }
    return 0;
}