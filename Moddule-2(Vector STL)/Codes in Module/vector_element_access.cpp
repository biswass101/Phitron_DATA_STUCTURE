#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector <int> v = {1, 2, 3, 4, 5};
    vector <int> :: iterator it;
    // cout << v[v.size()-1]; //last element
    // cout << v.back() << endl;
    // cout << v[0];
    // cout << v.front() << endl;

    //VECTOR ITERATOR   
    for(it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " ";
    }
    return 0;
}