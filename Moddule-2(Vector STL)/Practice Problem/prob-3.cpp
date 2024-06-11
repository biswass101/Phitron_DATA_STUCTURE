#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    vector<int> v(arr, arr+5);
    for(auto x : v) cout << x << " ";
    return 0;
}