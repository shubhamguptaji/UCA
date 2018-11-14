#include<bits/stdc++.h>
using namespace std;

int min(int a, int b) 
{
    return a<b?a:b;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int visited[n]= {0};
        int count=0, first, second;
        if(n<=1) {
            cout<<a[0];
            continue;
        }
        for(int i=0;i<n;i++) {
            for(int i=0;i<n;i++)
            {
                if(a[i]<=a[first] && visited[i]!=1)
                {
                    second = first;
                    first = i;
                }
                else if(a[i]<=a[second] && visited[i]!=1)
                {
                    second = i;
                }
            }
            cout<<a[first]<<" "<<a[second]<<endl;
            while(min(a[first], a[second])>k) {
                a[first]--;
                a[second]--;

            }
            first = second;
            visited[first] = 1;
        }
        int sum =0;
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
            sum+= a[i];
        }
        cout<<sum<<endl;
    }
}