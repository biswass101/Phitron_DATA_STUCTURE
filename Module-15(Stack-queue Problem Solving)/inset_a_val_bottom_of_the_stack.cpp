#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    stack<int> tmp;
    while(!myStack.empty())
    {
        tmp.push(myStack.top());
        myStack.pop();
    }

    myStack.push(x);
    while(!tmp.empty())
    {
        myStack.push(tmp.top());
        tmp.pop();
    }

    return myStack;
}

int main()
{
    //Problem Link :    https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166?leftPanelTabValue=PROBLEM
    return 0;
}