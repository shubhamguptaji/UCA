#include <iostream>
#include <stdlib.h>
#include<stack>
using namespace std;

int* findSmaller(int a[], int n) 
{
    int *b = (int*)malloc(sizeof(int)*n);
    stack<int> stk;
    b[0] = -1;
    stk.push(a[0]);
    for(int i=1;i<n;i++) 
    {
        if(stk.top()<a[i]) {
            b[i] = stk.top();
            stk.push(a[i]);

        }
        else 
        {
            while(a[i]<= stk.top())
                stk.pop();
            if(stk.empty())
                b[i] = -1;
            else
                b[i] = stk.top();
            stk.push(a[i]);
            

            
        }
    }
    return b;

}

int main(){
    int a[] = {1, 2, 3};
    int* res = findSmaller(a, 3);
    for(int i=0;i<5;i++)
        cout<<res[i]<< " ";
    return 0;
}