#include <bits/stdc++.h>
using namespace std;
class Pairrr
{
public:
    string name;
    int num;
    Pairrr(string name, int num)
    {
        this->name = name;
        this->num = num;
    }
};
class cmp
{
public:
    bool operator()(Pairrr a, Pairrr b)
    {
        if (a.name > b.name)
            return true;
        else if (a.name < b.name)
            return false;
        else
        {
            if (a.num < b.num)
                return true;
            else
                return false;
        }
    }
};
bool cmp1(Pairrr a, Pairrr b)
{
    if (a.name < b.name)
        return true;
    else if (a.name > b.name)
        return false;
    else
    {
        return a.num > b.num;
    }
}
int main()
{
    // int n; cin >> n;
    // priority_queue<Pairrr, vector<Pairrr>, cmp> pq;
    // for(int i = 0; i < n; i++)
    // {
    //     string name;
    //     int num;
    //     cin >> name >> num;
    //     Pairrr obj(name, num);
    //     pq.push(obj);
    // }

    // while(!pq.empty())
    // {
    //     cout << pq.top().name << " " << pq.top().num << " " << endl;
    //     pq.pop();
    // }
    // return 0;
    int n;
    cin >> n;
    vector<Pairrr> v;
    for (int i = 0; i < n; i++)
    {
        string name;
        int num;
        cin >> name >> num;
        Pairrr obj(name, num);
        v.push_back(obj);
    }
    sort(v.begin(), v.end(), cmp1);
    for(auto pr : v) cout << pr.name << " " << pr.num << " " << endl;
}