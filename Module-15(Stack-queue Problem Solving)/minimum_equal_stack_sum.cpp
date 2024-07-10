#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
int maxSum(stack<int> &st1, stack<int> &st2, stack<int> &st3) {
  int sum1 = 0, sum2 = 0, sum3 = 0;
  stack<int> s1, s2, s3;
  while (!st1.empty()) {
    sum1 += st1.top();
    s1.push(st1.top());
    st1.pop();
  }
  while (!st2.empty()) {
    sum2 += st2.top();
    s2.push(st2.top());
    st2.pop();
  }
  while (!st3.empty()) {
    sum3 += st3.top();
    s3.push(st3.top());
    st3.pop();
  }

  // cout << sum1 << " " << sum2 << " " << sum3 << endl;

  // giving back
  while (!s1.empty()) {
    st1.push(s1.top());
    s1.pop();
  }
  while (!s2.empty()) {
    st2.push(s2.top());
    s2.pop();
  }
  while (!s3.empty()) {
    st3.push(s3.top());
    s3.pop();
  }

  while (true) {
    if(sum1 == sum2 && sum2 == sum3) break;
    if(sum1 >= sum2 && sum1 >= sum3)
    {
        sum1 -= st1.top();
        st1.pop();
    }
    else if(sum2 >= sum1 && sum2 >= sum3)
    {
        sum2 -= st2.top();
        st2.pop();
    }
    else
    {
        sum3 -= st3.top();
        st3.pop();
    }
  }

  return sum1;
}
int main()
{
    //proble link: https://www.naukri.com/code360/problems/maximum-equal-stack-sum_1062571
    return 0;
}