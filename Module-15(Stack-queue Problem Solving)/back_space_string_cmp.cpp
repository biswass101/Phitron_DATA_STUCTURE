#include<bits/stdc++.h>
using namespace std;
class Solution1 {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1, st2;
        for(auto c : s)
        {
            if(c == '#'  && !st1.empty())
            {
                st1.pop();
            }
            else if(c != '#') st1.push(c);
        }
        for(auto c : t)
        {
            if(c == '#'  && !st2.empty())
            {
                st2.pop();
            }
            else if(c != '#') st2.push(c);
        }

        return st1 == st2;
    }
};
class Solution2 {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st1, st2;
        for(auto c : s)
        {
            if(c == '#')
            {
                if(!st1.empty()) st1.pop();
            }
            else st1.push(c);
        }
        for(auto c : t)
        {
            if(c == '#')
            {
                if(!st2.empty()) st2.pop();
            }
            else st2.push(c);
        }

        return st1 == st2;
    }
};

int main()
{
    //Problem LinK; https://leetcode.com/problems/backspace-string-compare/description/
    return 0;
}