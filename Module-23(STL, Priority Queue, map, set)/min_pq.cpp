#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>,
    greater<int>> pq; //min heap

    while(true)
    {
        int c; cin >> c;
        if(c == 0) //push value in heap
        {
            int x; cin >> x;
            pq.push(x);
        }
        else if(c == 1) //delete top value
        {
            pq.pop();
        }
        else if(c == 2) //show top value
        {
            cout << pq.top() << endl;
        }
        else break;
    }
    return 0;
}