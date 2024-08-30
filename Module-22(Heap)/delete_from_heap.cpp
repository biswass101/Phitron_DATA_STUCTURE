#include <bits/stdc++.h> //max heap
using namespace std;
void insertAtHeap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() - 1;
    while (cur_idx != 0)
    {
        int parent_idx = (cur_idx - 1) / 2;
        if (v[parent_idx] < v[cur_idx]) 
            swap(v[parent_idx], v[cur_idx]);
        else
            break;

        cur_idx = parent_idx;
    }
}
void deleteFromHeap(vector<int>& v)
{
    v[0] = v[v.size() - 1];
    v.pop_back();
    int cur = 0;
    while(true)
    {
        int l_idx = cur*2 + 1; //left node
        int r_idx = cur*2 + 2; //right node
        int last_idx = v.size() - 1; //last node
        if(l_idx <= last_idx && r_idx <= last_idx)
        {
            //both side node available-->
            if(v[l_idx] >= v[r_idx] && v[l_idx] > v[cur])
            {
                swap(v[l_idx], v[cur]);
                cur = l_idx;
            }
            else if(v[r_idx] >= v[l_idx] && v[r_idx] > v[cur])
            {
                swap(v[r_idx], v[cur]);
                cur = r_idx;
            }
            else break;

        }
        else if(l_idx <= last_idx)
        {
            if(v[l_idx] > v[cur]) swap(v[l_idx], v[cur]);
            else break;

        }
        else if(r_idx <= last_idx)
        {
            //right available
            if(v[r_idx] > v[cur]) swap(v[r_idx], v[cur]);
            else break;
        }
        else
        {
            //no node available
            break;
        }
    }
}
void print_heap(vector<int>& v)
{
    for(auto x : v) cout << x << ' ';
}
int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++)
    {
        int x; cin >> x;
        insertAtHeap(v, x);
    }
    deleteFromHeap(v);
    print_heap(v); cout << endl;
    deleteFromHeap(v);
    print_heap(v);
    return 0;
}