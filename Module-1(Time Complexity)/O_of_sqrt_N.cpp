//Divisor
#include<bits/stdc++.h>
using namespace std;
int main()

{

    int n;
    cin >> n;
    /*for(int i = 1; i <= sqrt(n); i++) //O(sqrt(N)) time complexity
    {
        if(n % i == 0)
        {
            if(n / i == i)
            {
                cout << i << endl;
            }
            else 
            {
                cout << i << " " << n/i << endl;
            }
        }
    }*/
    for(int i = 1; i * i <= n; i++) //O(sqrt(N))
    {
        cout << i << endl;
    }

    return 0;
}