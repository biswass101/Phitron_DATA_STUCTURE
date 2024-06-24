// #include<bits/stdc++.h>
// using namespace std;
// void fun(int *&p)
// {
//     // cout << &p << endl;
//     // cout << p << endl;
//     // *p = 200;
//     cout << &p << endl;
// }
// int main()
// {
//     int val = 10;
//     int *ptr = &val;
//     fun(ptr);
//     cout << ptr << endl;
//     // cout << *ptr << endl;
//     // cout << ptr << " " << &val << endl; //same
//     // cout << &ptr << endl;
//     // cout << val << endl;
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
void fun(int *& x)
{
    x = NULL;
    cout << &x << endl;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << *ptr << endl;
    return 0;
}