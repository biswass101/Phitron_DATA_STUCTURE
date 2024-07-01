#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40, 30, 50, 60, 70};
    list<int> newList = {23, 4, 3};
    vector<int> v = {45, 23, 1};
    // list<int> newList;
    // // newList = myList;
    // newList.assign(myList.begin(), myList.end());
    // for(auto val : newList) cout << val << " ";
    // myList.push_front(100);
    // myList.push_back(22);
    // myList.pop_back();
    // myList.pop_front();
    // myList.insert(next(myList.begin(), 0), 100);
    // myList.insert(next(myList.begin(), 1), {100, 200, 300});
    // myList.insert(next(myList.begin(), 1), newList.begin(), newList.end());
    // myList.insert(next(myList.begin(), 1), v.begin(), v.end());
    // myList.erase(next(myList.begin(), 2));
    // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));

    // replace(myList.begin(), myList.end(), 30, 76);
    auto it = find(myList.begin(), myList.end(), 60);
    if(it == myList.end()) cout << "Painai" << endl;
    else cout << "Paici" << endl;
    // for(auto val : myList) cout << val << " ";
    return 0;
}