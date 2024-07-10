#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
queue<int> reverseQueue(queue<int> q)
{
    stack<int> st;
    while(!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    return q;
}

int main()
{
    //problem link: https://www.naukri.com/code360/problems/reversing-a-queue_982934?leftPanelTabValue=PROBLEM
    return 0;
}