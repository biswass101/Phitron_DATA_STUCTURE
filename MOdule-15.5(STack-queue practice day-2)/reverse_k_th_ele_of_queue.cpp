#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
queue<int> reverseElements(queue<int> q, int k)
{
    stack<int> st;
    queue<int> tmp;
    while(k--)
    {
        st.push(q.front());
        q.pop();
    }
    while(!q.empty())
    {
        tmp.push(q.front());
        q.pop();
    }
    while(!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while(!tmp.empty())
    {
        q.push(tmp.front());
        tmp.pop();
    }

    return q;

}

int main()
{
    //Problem Link: https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771?leftPanelTabValue=PROBLEM
    return 0;
}