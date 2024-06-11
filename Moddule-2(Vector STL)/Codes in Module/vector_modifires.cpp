#include<bits/stdc++.h>
using namespace std;
int main()

{

    //vector assign
    vector <int> v = {10, 11, 12, 13, 14};
    // vector <int> v1 = {1, 2, 3};
    // v1 = v;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}