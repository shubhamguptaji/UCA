#include <iostream>
#include <stack>
#include <string>

using namespace std;


int redundantBraces(string a) 
{
    int len = a.length();
    int  i = 0;
    stack<char> stk;
    for(i=0;i<len;i++)
    {
        if(a[i] == ')')
        {
            char top = stk.top();
            stk.pop();
            int flag = 1;
            while(top!='(')
            {
                if(top=='+' || top == '*' || top == '-' || top=='/')
                    flag=0;
                top = stk.top();
                stk.pop();
            }
            if(flag==1)
                return 1;
        }
        else
            stk.push(a[i]);
    }
    return 0;
}

int main() {
    string a = "((a+b))";
    cout<<redundantBraces(a);
    return 0;
}