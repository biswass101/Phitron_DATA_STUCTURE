#include<bits/stdc++.h>
using namespace std;
int main()

{

    vector <int> v = {1, 2, 3, 4};
    vector <int> v1 = {14, 3, 2, 3};
    //v.insert(v.begin()+2, 10);
    v.insert(v.begin()+2, v1.begin(), v1.end()); //full vector insert
    for(int x : v) //range based for loop
    {
        cout << x << " ";
    }

    return 0;
}