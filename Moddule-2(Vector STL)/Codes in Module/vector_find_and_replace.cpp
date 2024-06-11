#include<bits/stdc++.h>
using namespace std;
int main()

{
    //replace
    /*vector <int> v = {1, 2, 3, 4, 2, 2, 2, 4, 2};
    replace(v.begin(), v.end()-1, 2, 100);
    for(int x: v)
    {
        cout << x << " ";
    }*/
    //find
    vector <int> v = {1, 2, 3, 4, 2, 2, 2, 4, 2};
    // vector <int> :: iterator it;
    auto it = find(v.begin(), v.end(), 100);
    if(it == v.end()) cout << " Not Found " << endl;
    else cout << " Found " << endl;

    return 0;
}