#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int first = INT_MAX;
        int second = INT_MAX;
        int flag=0;
        for(int i=0;i<s.length();i++)
        {
            flag=0;
            if(isdigit(s[i]))
            {
                if(first==INT_MAX)
                    first = i;
                else
                    second = i;
                if(first!=INT_MAX && second!=INT_MAX)
                {
                    int sum = (int)s[first]-48 + (int)s[second] -48;
                    if(sum>(second-first-1))
                    {
                        flag=1;
                        break;
                    }
                    else
                        flag=0;
                    first = second;
                    second = INT_MAX;
                }
            }
        }

            if(flag)
                cout<<"unsafe";
            else
                cout<<"safe";
    }
}