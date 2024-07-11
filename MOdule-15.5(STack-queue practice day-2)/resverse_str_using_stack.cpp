#include<bits/stdc++.h>
using namespace std;
string kevinStackProblem(string &s)
{
	string res;
	stack<char> st;
	for(auto c : s)
	{
		st.push(c);
	}
	while(!st.empty())
	{
		res.push_back(st.top());
		st.pop();
	}

	return res;
}
int main()
{
    //Problem_LinK: https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465?leftPanelTabValue=PROBLEM
    return 0;
}