#include<bits/stdc++.h>
using namespace std;
class Solution1 {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i = 0; i < s.size(); i++)
        {
            if(!st.empty())
            {
                if(s[i] == ')')
                {
                    if(st.top() == '(') st.pop();
                    else return false;
                }
                else if(s[i] == '}')
                {
                    if(st.top() == '{') st.pop();
                    else return false;
                }
                else if(s[i] == ']')
                {
                    if(st.top() == '[') st.pop();
                    else return false;
                }
                else st.push(s[i]);
            }
            else st.push(s[i]);
        }

        if(st.size()) return false;
        else return true;
    }
};
class Solution2 {
public:
    bool isValid(string s) {

       stack<char> st;
       for(char c : s)
       {
           if(c == '(' || c == '{' || c == '[')
           {
               st.push(c);
           }
           else
           {
               if(st.empty()) return false;
               else
               {
                  if(c == ')' && st.top() == '(')
                  {
                      st.pop();
                  }
                  else if(c == '}' && st.top() == '{' )
                  {
                      st.pop();
                  }
                  else if(c == ']' && st.top() == '[')
                  {
                      st.pop();
                  }
                  else return false;
               }
           }
       }
       return st.empty(); 
    }  
        
};
int main()
{
    //Problem Link: https://leetcode.com/problems/valid-parentheses/description/
    return 0;
}