#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    list<int> myList;
    while (q--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
            myList.push_front(v);
        else if (x == 1)
            myList.push_back(v);
        else if (x == 2)
        {
            // if (v == 0)
            //     myList.pop_front();
            // // else if (v == myList.size() - 1)
            // //     myList.pop_back();
            // else if (v >= myList.size())
            // {
            //     // cout << "L -> ";
            //     // for (auto v : myList)
            //     //     cout << v << " ";
            //     // cout << endl;
            //     // cout << "R -> ";
            //     // myList.reverse();
            //     // for (auto v : myList)
            //     //     cout << v << " ";
            //     // cout << endl;
            //     // myList.reverse();
            //     // continue;
            // }
            // else
            // {
            //     myList.erase(next(myList.begin(), v));
            // }

            if(v >= 0 && v < myList.size())
            {
                myList.erase(next(myList.begin(), v));
            }
        }
        cout << "L -> ";
        for (auto v : myList)
            cout << v << " ";
        cout << endl;
        cout << "R -> ";
        myList.reverse();
        for (auto v : myList)
            cout << v << " ";
        cout << endl;
        myList.reverse();
    }
    return 0;
}