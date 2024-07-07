#include<bits/stdc++.h>
using namespace std;
class myStack{
    vector<int> v;
    public:
        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int size()
        {
            return v.size();
        }
        bool isEmpty()
        {
            return v.size() == 0;
        }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    while(st.isEmpty() == false)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}