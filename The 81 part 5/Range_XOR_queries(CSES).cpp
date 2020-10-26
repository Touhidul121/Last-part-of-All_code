#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,a,b;
    cin>>n>>q;

    vector<int>pref(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>a;
        pref[i]=pref[i-1]^a;
    }

    while(q--)
    {
        cin>>a>>b;

        cout<<(pref[b]^(pref[a-1]))<<"\n";
    }
}
