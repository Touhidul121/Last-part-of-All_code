#include<bits/stdc++.h>
using namespace std;

void reverse(stack<int>&stk)
{
    if(stk.size()==0)
        return;

    int tmp=stk.top();
    stk.pop();
    reverse(stk);
    stk.push(tmp);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

    int n,a;
    cin>>n;
    stack<int>stk;

    for(int i=0;i<n;i++)cin>>a , stk.push(a);

    reverse(stk);

    for(int i=0;i<n;i++)
    {
        cout<<stk.top()<<" ";
        stk.pop();
    }
}
