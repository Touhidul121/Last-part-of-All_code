#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,x;
    cin>>n;
    vector<int>loc(n+1,0),fre(n+1,0);

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        loc[a]=i;
    }

    for(int i=1;i<=n;i++)
    {
        cin>>a;
         x=(loc[a]-i+n)%n;
        fre[x]++;
    }
    int mx=0;
    for(int i=0;i<=n;i++)
    {
        if(fre[i]>mx)
            mx=fre[i];
    }
    cout<<mx<<"\n";
}
