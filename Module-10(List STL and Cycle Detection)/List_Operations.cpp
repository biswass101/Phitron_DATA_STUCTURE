#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 22, 22, 89, 90};
    // myList.remove(22);
    // myList.sort(); //ascending
    // myList.sort(greater<int>()); //descending
    // myList.unique();
    myList.reverse();
    for(auto val : myList) cout << val << " ";
    return 0;
}