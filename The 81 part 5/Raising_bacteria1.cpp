#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count=0;
cin>>n;
//Brian Carnigan Algo
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    cout<<count<<"\n";
}
